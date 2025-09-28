#ifndef AUDIOMANAGER_H
#define AUDIOMANAGER_H

#include <QObject>
#include <QMediaPlayer>
#include <QAudioOutput>

class AudioManager : public QObject
{
    Q_OBJECT

public:
    explicit AudioManager(QObject *parent = nullptr);
    void startBackgroundMusic();

private:
    QMediaPlayer* player;
    QAudioOutput* audioOutput;
    QList<QUrl> tracks;
    int currentTrackIndex;
};

#endif // AUDIOMANAGER_H
