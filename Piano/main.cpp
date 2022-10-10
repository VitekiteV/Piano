#include "PianoWindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PianoWindow w;
    w.show();
    return a.exec();
}
