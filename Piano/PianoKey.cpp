#include "PianoKey.h"
#include <QMediaPlayer>
#include <QAudioOutput>

PianoKey::PianoKey(const QString& name, const QString& sound_name) : name_(name), sound_name_(sound_name)
{

}

void PianoKey::MakeSound(float volume) const
{
    QMediaPlayer* player = new QMediaPlayer;
    QAudioOutput* audio_output = new QAudioOutput;
    player->setAudioOutput(audio_output);
    //QMediaPlayer::connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    audio_output->setVolume(volume);
    player->setSource(QUrl("qrc:/resources/sounds/"+ sound_name_));
    player->play();
}
