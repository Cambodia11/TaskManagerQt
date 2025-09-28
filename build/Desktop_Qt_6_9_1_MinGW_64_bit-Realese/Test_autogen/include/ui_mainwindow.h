/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *PrintPage;
    QLabel *label11;
    QWidget *Menu;
    QLabel *label_4;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *MenuAddTask;
    QPushButton *TaskListMenu;
    QPushButton *StatusSwitch_2;
    QPushButton *pagedeleteTask;
    QPushButton *deleteAllTask;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QWidget *videoPage;
    QVideoWidget *videoWidget;
    QWidget *AddTask;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnAddTask;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;
    QLineEdit *newTask;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnBack_2;
    QLabel *label_8;
    QTableWidget *taskTable;
    QWidget *widget_2;
    QWidget *TaskList;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnBack;
    QWidget *widget;
    QWidget *StatusSwitch;
    QLabel *label_11;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_6;
    QPushButton *btnBack_3;
    QWidget *widget_3;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *label_14;
    QWidget *deleteTask;
    QLineEdit *buttonindexdelete;
    QPushButton *btnBack_4;
    QLabel *label_12;
    QLabel *label_18;
    QLabel *label_17;
    QWidget *widget_4;
    QPushButton *buttondeleteTask;
    QLabel *label_16;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1278, 708);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 1301, 741));
        PrintPage = new QWidget();
        PrintPage->setObjectName("PrintPage");
        label11 = new QLabel(PrintPage);
        label11->setObjectName("label11");
        label11->setGeometry(QRect(50, -190, 1191, 681));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift")});
        font.setPointSize(18);
        label11->setFont(font);
        label11->setWordWrap(true);
        stackedWidget->addWidget(PrintPage);
        Menu = new QWidget();
        Menu->setObjectName("Menu");
        label_4 = new QLabel(Menu);
        label_4->setObjectName("label_4");
        label_4->setEnabled(true);
        label_4->setGeometry(QRect(10, 600, 1281, 69));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift")});
        font1.setPointSize(24);
        label_4->setFont(font1);
        label_4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_4->setMouseTracking(false);
        label_4->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_4->setAcceptDrops(false);
        label_4->setMidLineWidth(1);
        label_4->setScaledContents(false);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4->setWordWrap(false);
        label_4->setMargin(0);
        label_4->setIndent(-1);
        label_4->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        verticalLayoutWidget = new QWidget(Menu);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(499, 220, 311, 361));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MenuAddTask = new QPushButton(verticalLayoutWidget);
        MenuAddTask->setObjectName("MenuAddTask");
        MenuAddTask->setEnabled(true);
        MenuAddTask->setFont(font);
        MenuAddTask->setIconSize(QSize(16, 16));

        verticalLayout->addWidget(MenuAddTask);

        TaskListMenu = new QPushButton(verticalLayoutWidget);
        TaskListMenu->setObjectName("TaskListMenu");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift")});
        font2.setPointSize(16);
        TaskListMenu->setFont(font2);

        verticalLayout->addWidget(TaskListMenu);

        StatusSwitch_2 = new QPushButton(verticalLayoutWidget);
        StatusSwitch_2->setObjectName("StatusSwitch_2");
        StatusSwitch_2->setFont(font2);

        verticalLayout->addWidget(StatusSwitch_2);

        pagedeleteTask = new QPushButton(verticalLayoutWidget);
        pagedeleteTask->setObjectName("pagedeleteTask");
        pagedeleteTask->setFont(font2);

        verticalLayout->addWidget(pagedeleteTask);

        deleteAllTask = new QPushButton(verticalLayoutWidget);
        deleteAllTask->setObjectName("deleteAllTask");
        deleteAllTask->setFont(font2);

        verticalLayout->addWidget(deleteAllTask);

        label_2 = new QLabel(Menu);
        label_2->setObjectName("label_2");
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(-1, 90, 1281, 69));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bahnschrift")});
        font3.setPointSize(22);
        label_2->setFont(font3);
        label_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_2->setMouseTracking(false);
        label_2->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_2->setAcceptDrops(false);
        label_2->setMidLineWidth(1);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2->setWordWrap(false);
        label_2->setMargin(0);
        label_2->setIndent(-1);
        label_2->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        label_3 = new QLabel(Menu);
        label_3->setObjectName("label_3");
        label_3->setEnabled(true);
        label_3->setGeometry(QRect(10, 160, 1281, 69));
        label_3->setFont(font3);
        label_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_3->setMouseTracking(false);
        label_3->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_3->setAcceptDrops(false);
        label_3->setMidLineWidth(1);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3->setWordWrap(false);
        label_3->setMargin(0);
        label_3->setIndent(-1);
        label_3->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        label = new QLabel(Menu);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setGeometry(QRect(0, 11, 1279, 69));
        label->setFont(font3);
        label->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label->setMouseTracking(false);
        label->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label->setAcceptDrops(false);
        label->setMidLineWidth(1);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setWordWrap(false);
        label->setMargin(0);
        label->setIndent(-1);
        label->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        stackedWidget->addWidget(Menu);
        videoPage = new QWidget();
        videoPage->setObjectName("videoPage");
        videoWidget = new QVideoWidget(videoPage);
        videoWidget->setObjectName("videoWidget");
        videoWidget->setGeometry(QRect(0, 0, 1281, 711));
        stackedWidget->addWidget(videoPage);
        AddTask = new QWidget();
        AddTask->setObjectName("AddTask");
        verticalLayoutWidget_2 = new QWidget(AddTask);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(840, 400, 283, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnAddTask = new QPushButton(verticalLayoutWidget_2);
        btnAddTask->setObjectName("btnAddTask");
        btnAddTask->setFont(font2);

        verticalLayout_2->addWidget(btnAddTask);

        label_6 = new QLabel(AddTask);
        label_6->setObjectName("label_6");
        label_6->setEnabled(true);
        label_6->setGeometry(QRect(0, 0, 1279, 69));
        label_6->setFont(font1);
        label_6->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_6->setMouseTracking(false);
        label_6->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_6->setAcceptDrops(false);
        label_6->setMidLineWidth(1);
        label_6->setScaledContents(false);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6->setWordWrap(false);
        label_6->setMargin(0);
        label_6->setIndent(-1);
        label_6->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        label_5 = new QLabel(AddTask);
        label_5->setObjectName("label_5");
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(340, 510, 1281, 69));
        label_5->setFont(font3);
        label_5->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_5->setMouseTracking(false);
        label_5->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_5->setAcceptDrops(false);
        label_5->setMidLineWidth(1);
        label_5->setScaledContents(false);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5->setWordWrap(false);
        label_5->setMargin(0);
        label_5->setIndent(-1);
        label_5->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        label_7 = new QLabel(AddTask);
        label_7->setObjectName("label_7");
        label_7->setEnabled(true);
        label_7->setGeometry(QRect(-280, 80, 1231, 69));
        label_7->setFont(font1);
        label_7->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_7->setMouseTracking(false);
        label_7->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_7->setAcceptDrops(false);
        label_7->setMidLineWidth(1);
        label_7->setScaledContents(false);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7->setWordWrap(false);
        label_7->setMargin(0);
        label_7->setIndent(-1);
        label_7->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        newTask = new QLineEdit(AddTask);
        newTask->setObjectName("newTask");
        newTask->setGeometry(QRect(710, 290, 541, 71));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Bahnschrift")});
        font4.setPointSize(14);
        newTask->setFont(font4);
        newTask->setMouseTracking(false);
        verticalLayoutWidget_3 = new QWidget(AddTask);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(840, 560, 283, 111));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnBack_2 = new QPushButton(verticalLayoutWidget_3);
        btnBack_2->setObjectName("btnBack_2");
        btnBack_2->setFont(font2);

        verticalLayout_3->addWidget(btnBack_2);

        label_8 = new QLabel(AddTask);
        label_8->setObjectName("label_8");
        label_8->setEnabled(true);
        label_8->setGeometry(QRect(360, 200, 1231, 69));
        label_8->setFont(font1);
        label_8->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_8->setMouseTracking(true);
        label_8->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_8->setAcceptDrops(false);
        label_8->setMidLineWidth(1);
        label_8->setScaledContents(false);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_8->setWordWrap(false);
        label_8->setMargin(0);
        label_8->setIndent(-1);
        label_8->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        taskTable = new QTableWidget(AddTask);
        taskTable->setObjectName("taskTable");
        taskTable->setGeometry(QRect(10, 140, 681, 501));
        taskTable->setFont(font4);
        widget_2 = new QWidget(AddTask);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(10, 140, 681, 501));
        stackedWidget->addWidget(AddTask);
        TaskList = new QWidget();
        TaskList->setObjectName("TaskList");
        label_9 = new QLabel(TaskList);
        label_9->setObjectName("label_9");
        label_9->setEnabled(true);
        label_9->setGeometry(QRect(-10, 60, 1281, 69));
        label_9->setFont(font1);
        label_9->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_9->setMouseTracking(false);
        label_9->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_9->setAcceptDrops(false);
        label_9->setMidLineWidth(1);
        label_9->setScaledContents(false);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_9->setWordWrap(false);
        label_9->setMargin(0);
        label_9->setIndent(-1);
        label_9->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        label_10 = new QLabel(TaskList);
        label_10->setObjectName("label_10");
        label_10->setEnabled(true);
        label_10->setGeometry(QRect(0, 0, 1281, 69));
        label_10->setFont(font1);
        label_10->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_10->setMouseTracking(false);
        label_10->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_10->setAcceptDrops(false);
        label_10->setMidLineWidth(1);
        label_10->setScaledContents(false);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_10->setWordWrap(false);
        label_10->setMargin(0);
        label_10->setIndent(-1);
        label_10->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        verticalLayoutWidget_4 = new QWidget(TaskList);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(1000, 570, 283, 111));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        btnBack = new QPushButton(verticalLayoutWidget_4);
        btnBack->setObjectName("btnBack");
        btnBack->setFont(font2);

        verticalLayout_4->addWidget(btnBack);

        widget = new QWidget(TaskList);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(290, 120, 681, 501));
        stackedWidget->addWidget(TaskList);
        StatusSwitch = new QWidget();
        StatusSwitch->setObjectName("StatusSwitch");
        label_11 = new QLabel(StatusSwitch);
        label_11->setObjectName("label_11");
        label_11->setEnabled(true);
        label_11->setGeometry(QRect(0, 0, 1281, 69));
        label_11->setFont(font1);
        label_11->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_11->setMouseTracking(false);
        label_11->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_11->setAcceptDrops(false);
        label_11->setMidLineWidth(1);
        label_11->setScaledContents(false);
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_11->setWordWrap(false);
        label_11->setMargin(0);
        label_11->setIndent(-1);
        label_11->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        verticalLayoutWidget_5 = new QWidget(StatusSwitch);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(1000, 570, 283, 111));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        btnBack_3 = new QPushButton(verticalLayoutWidget_5);
        btnBack_3->setObjectName("btnBack_3");
        btnBack_3->setFont(font2);

        verticalLayout_6->addWidget(btnBack_3);

        widget_3 = new QWidget(StatusSwitch);
        widget_3->setObjectName("widget_3");
        widget_3->setEnabled(true);
        widget_3->setGeometry(QRect(310, 150, 681, 501));
        label_13 = new QLabel(widget_3);
        label_13->setObjectName("label_13");
        label_13->setEnabled(true);
        label_13->setGeometry(QRect(210, 30, 1231, 69));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Bahnschrift")});
        font5.setPointSize(22);
        font5.setBold(false);
        label_13->setFont(font5);
        label_13->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_13->setMouseTracking(false);
        label_13->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_13->setAcceptDrops(false);
        label_13->setMidLineWidth(1);
        label_13->setScaledContents(false);
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_13->setWordWrap(false);
        label_13->setMargin(0);
        label_13->setIndent(-1);
        label_13->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        label_15 = new QLabel(widget_3);
        label_15->setObjectName("label_15");
        label_15->setEnabled(true);
        label_15->setGeometry(QRect(180, 110, 1281, 69));
        label_15->setFont(font1);
        label_15->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_15->setMouseTracking(false);
        label_15->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_15->setAcceptDrops(false);
        label_15->setMidLineWidth(1);
        label_15->setScaledContents(false);
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_15->setWordWrap(false);
        label_15->setMargin(0);
        label_15->setIndent(-1);
        label_15->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        label_14 = new QLabel(StatusSwitch);
        label_14->setObjectName("label_14");
        label_14->setEnabled(true);
        label_14->setGeometry(QRect(0, 70, 1281, 69));
        label_14->setFont(font1);
        label_14->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_14->setMouseTracking(false);
        label_14->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_14->setAcceptDrops(false);
        label_14->setMidLineWidth(1);
        label_14->setScaledContents(false);
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_14->setWordWrap(false);
        label_14->setMargin(0);
        label_14->setIndent(-1);
        label_14->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        stackedWidget->addWidget(StatusSwitch);
        deleteTask = new QWidget();
        deleteTask->setObjectName("deleteTask");
        buttonindexdelete = new QLineEdit(deleteTask);
        buttonindexdelete->setObjectName("buttonindexdelete");
        buttonindexdelete->setGeometry(QRect(940, 280, 51, 41));
        buttonindexdelete->setFont(font4);
        buttonindexdelete->setMouseTracking(false);
        btnBack_4 = new QPushButton(deleteTask);
        btnBack_4->setObjectName("btnBack_4");
        btnBack_4->setGeometry(QRect(830, 490, 281, 29));
        btnBack_4->setFont(font2);
        label_12 = new QLabel(deleteTask);
        label_12->setObjectName("label_12");
        label_12->setEnabled(true);
        label_12->setGeometry(QRect(350, 200, 1231, 69));
        label_12->setFont(font5);
        label_12->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_12->setMouseTracking(true);
        label_12->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_12->setAcceptDrops(false);
        label_12->setMidLineWidth(1);
        label_12->setScaledContents(false);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_12->setWordWrap(false);
        label_12->setMargin(0);
        label_12->setIndent(-1);
        label_12->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        label_18 = new QLabel(deleteTask);
        label_18->setObjectName("label_18");
        label_18->setEnabled(true);
        label_18->setGeometry(QRect(320, 410, 1281, 69));
        label_18->setFont(font3);
        label_18->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_18->setMouseTracking(false);
        label_18->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_18->setAcceptDrops(false);
        label_18->setMidLineWidth(1);
        label_18->setScaledContents(false);
        label_18->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_18->setWordWrap(false);
        label_18->setMargin(0);
        label_18->setIndent(-1);
        label_18->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        label_17 = new QLabel(deleteTask);
        label_17->setObjectName("label_17");
        label_17->setEnabled(true);
        label_17->setGeometry(QRect(0, 0, 1279, 69));
        label_17->setFont(font1);
        label_17->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_17->setMouseTracking(false);
        label_17->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_17->setAcceptDrops(false);
        label_17->setMidLineWidth(1);
        label_17->setScaledContents(false);
        label_17->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_17->setWordWrap(false);
        label_17->setMargin(0);
        label_17->setIndent(-1);
        label_17->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        widget_4 = new QWidget(deleteTask);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(10, 140, 681, 501));
        buttondeleteTask = new QPushButton(deleteTask);
        buttondeleteTask->setObjectName("buttondeleteTask");
        buttondeleteTask->setGeometry(QRect(830, 360, 281, 29));
        buttondeleteTask->setFont(font2);
        label_16 = new QLabel(deleteTask);
        label_16->setObjectName("label_16");
        label_16->setEnabled(true);
        label_16->setGeometry(QRect(-280, 80, 1231, 69));
        label_16->setFont(font1);
        label_16->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_16->setMouseTracking(false);
        label_16->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        label_16->setAcceptDrops(false);
        label_16->setMidLineWidth(1);
        label_16->setScaledContents(false);
        label_16->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_16->setWordWrap(false);
        label_16->setMargin(0);
        label_16->setIndent(-1);
        label_16->setTextInteractionFlags(Qt::TextInteractionFlag::LinksAccessibleByMouse|Qt::TextInteractionFlag::TextSelectableByKeyboard);
        stackedWidget->addWidget(deleteTask);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label11->setText(QCoreApplication::translate("MainWindow", "By Cambodia Corporation is a forward-thinking and innovative company dedicated to promoting sustainable development and providing advanced technology solutions. We strive to create meaningful impact by empowering local communities and businesses across Cambodia. Our team is committed to delivering high-quality services that foster economic growth, environmental responsibility, and social progress. Through a combination of cutting-edge technology and ethical business practices, By Cambodia Corporation aims to be a leading force in driving positive change and long-term value for our clients and partners.", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "All data is saved", nullptr));
        MenuAddTask->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        TaskListMenu->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\267\320\260\320\264\320\260\321\207", nullptr));
        StatusSwitch_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\321\202\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\275\320\276\320\271", nullptr));
        pagedeleteTask->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        deleteAllTask->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Cambodia Task List", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216 ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "By Cambodia Corporation", nullptr));
        btnAddTask->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "By Cambodia Corporation", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "All data is saved", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\227\320\260\320\264\320\260\321\207", nullptr));
        newTask->setText(QString());
        btnBack_2->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270 \320\262 \320\274\320\265\320\275\321\216", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\320\224\320\276\320\261\320\260\320\262\321\214\321\202\320\265 \320\267\320\260\320\264\320\260\321\207\321\203</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\227\320\260\320\264\320\260\321\207", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "By Cambodia Corporation", nullptr));
        btnBack->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270 \320\262 \320\274\320\265\320\275\321\216", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "By Cambodia Corporation", nullptr));
        btnBack_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270 \320\262 \320\274\320\265\320\275\321\216", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\321\214\321\202\320\265 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\266\320\274\320\270\321\202\320\265 \320\275\320\260 \321\201\321\202\320\260\321\202\321\203\321\201", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", " \320\235\320\260\320\266\320\274\320\270\321\202\320\265 \320\275\320\260 \321\201\321\202\320\260\321\202\321\203\321\201 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        buttonindexdelete->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btnBack_4->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270 \320\262 \320\274\320\265\320\275\321\216", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">\320\243\320\264\320\260\320\273\320\270\321\202\320\265 \320\267\320\260\320\264\320\260\321\207\321\203</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "All data is saved", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "By Cambodia Corporation", nullptr));
        buttondeleteTask->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\321\203", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\227\320\260\320\264\320\260\321\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
