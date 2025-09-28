#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "taskmaneger.h"
#include <qmessagebox.h>
#include <QCloseEvent>
#include <QTimer>
#include <QAudioOutput>
#include <QGraphicsVideoItem>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsDropShadowEffect>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    loadInitialData();

    initWindow();

    initIntroVideo();

    initAudioPlayer();

    initTaskTable();

    initMenuButtons();

    initTypewriter();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadInitialData() {
    manager.loadFromFile("tasks.json");
    updateTaskList();
}

void MainWindow::initTypewriter() {
    fullText = ui->label11->text();
    ui->label11->clear();

    typeTimer = new QTimer(this);
    connect(typeTimer, &QTimer::timeout, this, &MainWindow::onTypeTimerTimeout);
}

void MainWindow::initMenuButtons() {
    auto buttons = findChildren<QPushButton*>();
    for (auto btn : buttons) {
        if (btn->text() == "Выйти в меню") {
            connect(btn, &QPushButton::clicked, this, &MainWindow::goToMainMenu);
        }
    }
}

void MainWindow::initTaskTable() {
    ui->taskTable->setColumnCount(2);
    QStringList headers;
    headers << ""  << "";
    ui->taskTable->setHorizontalHeaderLabels(headers);
    ui->taskTable->horizontalHeader()->setVisible(false);
    ui->taskTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->taskTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->taskTable->horizontalHeader()->setStretchLastSection(true);
}

void MainWindow::initIntroVideo()
{
    createIntroVideoPlayer();
    videoPlayer->play();
}

void MainWindow::createIntroVideoPlayer()
{
    videoPlayer = new QMediaPlayer(this);
    videoWidget = new QVideoWidget(this);

    videoWidget->setMinimumSize(1280, 720);
    videoWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    videoPlayer->setVideoOutput(videoWidget);
    videoPlayer->setSource(QUrl::fromLocalFile("D:/C++/Qt/Test/resources/intro.mp4"));

    auto audioOutput = new QAudioOutput(this);
    audioOutput->setVolume(100);
    videoPlayer->setAudioOutput(audioOutput);

    connect(videoPlayer, &QMediaPlayer::mediaStatusChanged,
            this, &MainWindow::onIntroVideoStatusChanged);
}

void MainWindow::onIntroVideoStatusChanged(QMediaPlayer::MediaStatus status)
{
    if (status == QMediaPlayer::EndOfMedia) {
        startAfterVideo();
    }
}

void MainWindow::initWindow()
{
    this->setMinimumSize(1280, 720);
    this->setMaximumSize(1280, 720);
    ui->stackedWidget->setCurrentWidget(ui->videoPage);
}

void MainWindow::setupBackgroundVideo()
{
    QGraphicsScene *scene = new QGraphicsScene(this);
    QGraphicsView *view = new QGraphicsView(ui->centralwidget);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFrameShape(QFrame::NoFrame);
    view->setStyleSheet("background: transparent");
    view->setAttribute(Qt::WA_TransparentForMouseEvents);
    view->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
    view->setGeometry(-1, -1, 1285, 725);

    bgPlayer = new QMediaPlayer(this);
    QGraphicsVideoItem *videoItem = new QGraphicsVideoItem();
    videoItem->setSize(view->size());

    scene->addItem(videoItem);
    view->setScene(scene);

    bgPlayer->setVideoOutput(videoItem);
    bgPlayer->setSource(QUrl::fromLocalFile("D:/C++/Qt/Test/resources/background.mp4"));
    bgPlayer->setAudioOutput(nullptr);

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
    bgPlayer->setLoops(QMediaPlayer::Infinite);
#else
    connect(bgPlayer, &QMediaPlayer::mediaStatusChanged, this, [=](QMediaPlayer::MediaStatus status) {
        if (status == QMediaPlayer::EndOfMedia) {
            bgPlayer->setPosition(0);
            bgPlayer->play();
        }
    });
#endif

    bgPlayer->play();
    view->show();
    view->lower();

    this->bgVideoView = view;
    this->bgVideoItem = videoItem;

    ui->stackedWidget->setCurrentWidget(ui->PrintPage);
}

void MainWindow::startBackgroundMusic()
{
    currentTrackIndex = 0;
    player->setSource(tracks[currentTrackIndex]);
    player->play();

    disconnect(player, &QMediaPlayer::mediaStatusChanged, nullptr, nullptr);

    connect(player, &QMediaPlayer::mediaStatusChanged, this, [this](QMediaPlayer::MediaStatus status) {
        if (status == QMediaPlayer::EndOfMedia) {
            if (currentTrackIndex == 0) {
                currentTrackIndex = 1;
                player->setSource(tracks[currentTrackIndex]);
                player->play();

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
                player->setLoops(QMediaPlayer::Infinite);
#else
                disconnect(player, &QMediaPlayer::mediaStatusChanged, nullptr, nullptr);
                connect(player, &QMediaPlayer::mediaStatusChanged, this, [this](QMediaPlayer::MediaStatus status) {
                    if (status == QMediaPlayer::EndOfMedia) {
                        player->setPosition(0);
                        player->play();
                    }
                });
#endif
            }
        }
    });
};

void MainWindow::startAfterVideo()
{
    if (videoWidget)
        videoWidget->hide();

    setupBackgroundVideo();
    startTypewriterEffect();
    startBackgroundMusic();
}

void MainWindow::startTypewriterEffect()
{
    typeIndex = 0;
    ui->label11->clear();
    typeTimer->start(20);
}

void MainWindow::initAudioPlayer()
{
    player = new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);
    player->setAudioOutput(audioOutput);
    audioOutput->setVolume(50);

    // Список треков
    tracks << QUrl::fromLocalFile("D:/C++/Qt/Test/resources/song1.mp3")
           << QUrl::fromLocalFile("D:/C++/Qt/Test/resources/song2.mp3");

    // Первая песня запускается позже, в startAfterVideo()
}

void MainWindow::onTypeTimerTimeout()
{
    if (typeIndex > fullText.length()) {
        typeTimer->stop();

        // Переключаемся на главную страницу меню после печати
        ui->stackedWidget->setCurrentWidget(ui->Menu);  // Или тот виджет, где меню

        return;
    }
    ui->label11->setText(fullText.left(typeIndex));
    ++typeIndex;
}

void MainWindow::goToMainMenu()
{
    ui->stackedWidget->setCurrentWidget(ui->Menu);
}

void MainWindow::on_MenuAddTask_clicked()
{
    moveTableTo(ui->widget_2);
    updateTaskList();
    ui->stackedWidget->setCurrentWidget(ui->AddTask);
}

void MainWindow::updateTaskList()
{
    ui->taskTable->setRowCount(0);
    ui->taskTable->setColumnCount(3); // номер, текст, статус

    const QVector<Task>& tasks = manager.getTasks();

    QFont bahnschriftFont("Bahnschrift", 16);

    for (int i = 0; i < tasks.size(); ++i) {
        const Task& task = tasks[i];
        ui->taskTable->insertRow(i);

        // === Нумерация ===
        QTableWidgetItem* numItem = new QTableWidgetItem(QString::number(i + 1));
        numItem->setFont(bahnschriftFont);
        numItem->setTextAlignment(Qt::AlignCenter);
        ui->taskTable->setItem(i, 0, numItem);

        // === Текст задачи ===
        QTableWidgetItem* descItem = new QTableWidgetItem(task.getText());
        descItem->setFont(bahnschriftFont);
        descItem->setTextAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        ui->taskTable->setItem(i, 1, descItem);

        // === Кнопка статуса ===
        QPushButton* statusButton = new QPushButton(task.getisDone() ? "Выполнено" : "В процессе");
        statusButton->setFont(bahnschriftFont);
        statusButton->setFocusPolicy(Qt::NoFocus);

        statusButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        statusButton->setProperty("taskIndex", i);

        connect(statusButton, &QPushButton::clicked, this, [this, statusButton]() {
            int idx = statusButton->property("taskIndex").toInt();
            bool current = manager.getTasks()[idx].getisDone();
            manager.markTaskDone(idx, !current);
            updateTaskList();
        });

        ui->taskTable->setCellWidget(i, 2, statusButton);

        // Настройка строки
        ui->taskTable->setRowHeight(i, 45);
    }

    // === Ширина столбцов ===
    ui->taskTable->horizontalHeader()->setStretchLastSection(false);
    ui->taskTable->setColumnWidth(0, ui->taskTable->width() * 0.1); // номер
    ui->taskTable->setColumnWidth(1, ui->taskTable->width() * 0.6); // текст
    ui->taskTable->setColumnWidth(2, ui->taskTable->width() * 0.3); // статус

    // === Поведение таблицы ===
    ui->taskTable->setShowGrid(false);
    ui->taskTable->setSelectionMode(QAbstractItemView::NoSelection);
    ui->taskTable->setFocusPolicy(Qt::NoFocus);
    ui->taskTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->taskTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->taskTable->verticalHeader()->setVisible(false);
}

void MainWindow::moveTableTo(QWidget* targetPage)
{

    if (ui->taskTable->parentWidget() == targetPage) {
        // Таблица уже там, ничего не делаем
        return;
    }
    // Удалить таблицу с текущей страницы
    for (int i = 0; i < ui->stackedWidget->count(); ++i) {
        QWidget* page = ui->stackedWidget->widget(i);
        if (page->layout()) {
            page->layout()->removeWidget(ui->taskTable);
        }
    }

    // Если у страницы нет layout, создаём
    if (!targetPage->layout()) {
        QVBoxLayout* layout = new QVBoxLayout(targetPage);
        targetPage->setLayout(layout);
    }


    targetPage->layout()->addWidget(ui->taskTable);
}

void MainWindow::on_btnAddTask_clicked()
{
    QString text = ui->newTask->text().trimmed();

    if (text.isEmpty())
        return;


    if (manager.getTasks().size() >= 15) {
        QMessageBox::warning(this, "Ограничение", "Можно добавить не более 15 задач.");
        return;
    }
    manager.addTask(text);
    ui->newTask->clear();
    updateTaskList();

}

void MainWindow::on_BackToMenu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Menu);
}

void MainWindow::on_TaskListMenu_clicked()
{
    moveTableTo(ui->widget);
    updateTaskList();
    ui->stackedWidget->setCurrentWidget(ui->TaskList);
}

void MainWindow::on_StatusSwitch_2_clicked()
{
    moveTableTo(ui->widget_3);
    updateTaskList();
    ui->stackedWidget->setCurrentWidget(ui->StatusSwitch);
}

void MainWindow::on_pagedeleteTask_clicked()
{
    moveTableTo(ui->widget_4);
    updateTaskList();
    ui->stackedWidget->setCurrentWidget(ui->deleteTask);
    ui->buttonindexdelete->clear();
}

void MainWindow::on_buttondeleteTask_clicked()
{
    bool ok;
    int deleteindex = ui->buttonindexdelete->text().toInt(&ok);

    if(!ok)
    {
        QMessageBox::warning(this, "Ошибка", "Введите корректный номер задачи.");
        return;
    }
    if (deleteindex < 1 || deleteindex > manager.getTasks().size()) {
        QMessageBox::warning(this, "Ошибка", "Такой задачи не существует.");
        return;
    }
    manager.deleteTask(deleteindex - 1); // -1, так как отображается с 1, а массив с 0
    updateTaskList();
}

void MainWindow::on_deleteAllTask_clicked()
{
    manager.deleteAlltask();
    updateTaskList();
    QMessageBox msgBox;
    msgBox.setWindowTitle("Info");
    msgBox.setText("Все задачи удалены!!!");
    msgBox.setStyleSheet(R"(
    QLabel {
        font-size: 16px;
        min-width: 200px;
        min-height: 40px;
    }
    QPushButton {
        min-width: 80px;
        min-height: 30px;
        font-size: 14px;
    }
)");
    msgBox.exec();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    manager.saveToFile("tasks.json");
    event->accept();  // разрешаем закрытие
}
