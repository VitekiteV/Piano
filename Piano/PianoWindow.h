#ifndef PIANOWINDOW_H
#define PIANOWINDOW_H
#include <memory>
#include <QMainWindow>
#include "PianoKeyboard.h"

QT_BEGIN_NAMESPACE
namespace Ui { class PianoWindow; }
QT_END_NAMESPACE

class PianoWindow : public QMainWindow
{
    Q_OBJECT

public:
    PianoWindow(QWidget *parent = nullptr);
    ~PianoWindow();

private slots:
    void on_do_first_pb_pressed();
    void on_re_first_pb_pressed();
    void on_mi_first_pb_pressed();
    void on_fa_first_pb_pressed();
    void on_sol_first_pb_pressed();
    void on_lya_first_pb_pressed();
    void on_si_first_pb_pressed();
    void on_do_second_pb_pressed();
    void on_horizontalSlider_valueChanged(int value);
    void keyPressEvent(QKeyEvent* event) override;

private:
    std::unique_ptr<Ui::PianoWindow> ui_;
    PianoKeyboard piano_;
    float volume_ = 0.5;

};
#endif // PIANOWINDOW_H
