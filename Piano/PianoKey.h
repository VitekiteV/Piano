#ifndef PIANOKEY_H
#define PIANOKEY_H
#include <QString>


class PianoKey
{
public:
    PianoKey() = default;
    PianoKey(const QString& name, const QString& sound_name);

    void MakeSound(float volume) const;

private:
    QString name_;
    QString sound_name_;
};

#endif // PIANOKEY_H
