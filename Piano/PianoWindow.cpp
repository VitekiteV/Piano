#include "PianoWindow.h"
#include "ui_PianoWindow.h"
#include <QKeyEvent>
#include <QMediaPlayer>
#include <QAudioOutput>

PianoWindow::PianoWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui_(std::make_unique<Ui::PianoWindow>())
{
    ui_->setupUi(this);
    connect(ui_->do_second_pb, &QPushButton::pressed, this, &PianoWindow::on_do_second_pb_pressed);
}

PianoWindow::~PianoWindow()
{
}

void PianoWindow::on_do_first_pb_pressed()
{
    piano_.PressPianoKey("DO_first", volume_);
}

void PianoWindow::on_re_first_pb_pressed()
{
    piano_.PressPianoKey("RE_first", volume_);
}

void PianoWindow::on_mi_first_pb_pressed()
{
    piano_.PressPianoKey("MI_first", volume_);
}

void PianoWindow::on_fa_first_pb_pressed()
{
    piano_.PressPianoKey("FA_first", volume_);
}

void PianoWindow::on_sol_first_pb_pressed()
{
    piano_.PressPianoKey("SOL_first", volume_);
}

void PianoWindow::on_lya_first_pb_pressed()
{
    piano_.PressPianoKey("LA_first", volume_);
}

void PianoWindow::on_si_first_pb_pressed()
{
    piano_.PressPianoKey("SI_first", volume_);
}

void PianoWindow::on_do_second_pb_pressed()
{
    piano_.PressPianoKey("DO_second", volume_);
}

void PianoWindow::on_horizontalSlider_valueChanged(int value)
{
    ui_->volume_val_lbl->setText(QString::number(value));
    volume_ = value/100.0;
}

void PianoWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_A)
        on_do_first_pb_pressed();
    else if (event->key() == Qt::Key_S)
        on_re_first_pb_pressed();
    else if (event->key() == Qt::Key_D)
        on_mi_first_pb_pressed();
    else if (event->key() == Qt::Key_F)
        on_fa_first_pb_pressed();
    else if (event->key() == Qt::Key_K)
        on_sol_first_pb_pressed();
    else if (event->key() == Qt::Key_L)
        on_lya_first_pb_pressed();
    else if (event->key() == Qt::Key_Semicolon)
        on_si_first_pb_pressed();
    else if (event->key() == Qt::Key_Apostrophe)
        on_do_second_pb_pressed();

    QMainWindow::keyPressEvent(event);
}

