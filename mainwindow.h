#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "taskmaneger.h"
#include "audiomanager.h"
#include <QAudioOutput>
#include <QUrl>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QGraphicsVideoItem>
#include <QGraphicsView>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void closeEvent(QCloseEvent *event) override;
private slots:
    void goToMainMenu();
    void on_MenuAddTask_clicked();
    void on_btnAddTask_clicked();
    void on_BackToMenu_clicked();
    void on_TaskListMenu_clicked();
    void on_StatusSwitch_2_clicked();
    void on_pagedeleteTask_clicked();
    void on_buttondeleteTask_clicked();
    void on_deleteAllTask_clicked();
    void initWindow();
    void initIntroVideo();
    void initAudioPlayer();
    void initTaskTable();
    void initMenuButtons();
    void initTypewriter();
    void loadInitialData();
    void setupBackgroundVideo();
    void startBackgroundMusic();
    void createIntroVideoPlayer();
    void onIntroVideoStatusChanged(QMediaPlayer::MediaStatus status);
    void startAfterVideo();
    void startTypewriterEffect();
    void onTypeTimerTimeout();
    void updateTaskList();
    void moveTableTo(QWidget* targetPage);
private:
    Ui::MainWindow *ui;
    TaskManeger manager;
    AudioManager* audioManager;
    QString fullText;
    int typeIndex = 0;
    QTimer* typeTimer = nullptr;
    QMediaPlayer *player;
    QList<QUrl> tracks;
    int currentTrackIndex = 0;
    QMediaPlayer *videoPlayer;
    QVideoWidget *videoWidget;
    QMediaPlayer *bgPlayer = nullptr;
    QVideoWidget *bgVideo = nullptr;
    QGraphicsView *bgVideoView = nullptr;
    QGraphicsVideoItem *bgVideoItem = nullptr;
    QAudioOutput *audioOutput;
};
#endif // MAINWINDOW_H
