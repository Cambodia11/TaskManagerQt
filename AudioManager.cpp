#include "audiomanager.h"

AudioManager::AudioManager(QObject *parent)
    : QObject(parent),
    player(new QMediaPlayer(this)),
    audioOutput(new QAudioOutput(this)),
    currentTrackIndex(0)
{
    player->setAudioOutput(audioOutput);
    audioOutput->setVolume(50);

    tracks << QUrl::fromLocalFile("D:/C++/Qt/Test/resources/song1.mp3")
           << QUrl::fromLocalFile("D:/C++/Qt/Test/resources/song2.mp3");
}

void AudioManager::startBackgroundMusic()
{
    currentTrackIndex = 0;
    player->setSource(tracks[currentTrackIndex]);
    player->play();

    connect(player, &QMediaPlayer::mediaStatusChanged, this, [=](QMediaPlayer::MediaStatus status) {
        if (status == QMediaPlayer::EndOfMedia) {
            if (currentTrackIndex == 0) {
                currentTrackIndex = 1;
                player->setSource(tracks[currentTrackIndex]);
                player->play();

#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
                player->setLoops(QMediaPlayer::Infinite);
#else
                connect(player, &QMediaPlayer::mediaStatusChanged, this, [=](QMediaPlayer::MediaStatus status) {
                    if (status == QMediaPlayer::EndOfMedia) {
                        player->setPosition(0);
                        player->play();
                    }
                });
#endif
            }
        }
    });
}
