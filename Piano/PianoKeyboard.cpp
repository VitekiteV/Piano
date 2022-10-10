#include "PianoKeyboard.h"
#include "PianoKey.h"

PianoKeyboard::PianoKeyboard()
{
    keyboard_["DO_first"] = PianoKey("DO_first", "do_first.wav");
    keyboard_["RE_first"] = PianoKey("RE_first", "re_first.wav");
    keyboard_["MI_first"] = PianoKey("MI_first", "mi_first.wav");
    keyboard_["FA_first"] = PianoKey("FA_first", "fa_first.wav");
    keyboard_["SOL_first"] = PianoKey("SOL_first", "sol_first.wav");
    keyboard_["LA_first"] = PianoKey("LA_first", "la_first.wav");
    keyboard_["SI_first"] = PianoKey("SI_first", "si_first.wav");
    keyboard_["DO_second"] = PianoKey("DO_second", "do_second.wav");
}

PianoKeyboard::~PianoKeyboard()
{
}

void PianoKeyboard::PressPianoKey(const QString &key_name, float volume) const
{
    keyboard_[key_name].MakeSound(volume);
}
