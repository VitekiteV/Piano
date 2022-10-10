#ifndef PIANOKEYBOARD_H
#define PIANOKEYBOARD_H
#include <QMap>
#include <QString>

class PianoKey;

class PianoKeyboard
{
public:
    PianoKeyboard();
    ~PianoKeyboard();

    void PressPianoKey(const QString& key_name, float volume) const;

private:
    QMap<QString, PianoKey> keyboard_;
};

#endif // PIANOKEYBOARD_H
