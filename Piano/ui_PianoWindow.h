/********************************************************************************
** Form generated from reading UI file 'PianoWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIANOWINDOW_H
#define UI_PIANOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PianoWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *do_first_pb;
    QPushButton *re_first_pb;
    QPushButton *mi_first_pb;
    QPushButton *fa_first_pb;
    QPushButton *sol_first_pb;
    QPushButton *lya_first_pb;
    QPushButton *si_first_pb;
    QPushButton *do_second_pb;
    QSlider *horizontalSlider;
    QLabel *volume_lbl;
    QLabel *volume_val_lbl;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PianoWindow)
    {
        if (PianoWindow->objectName().isEmpty())
            PianoWindow->setObjectName(QString::fromUtf8("PianoWindow"));
        PianoWindow->resize(398, 328);
        centralwidget = new QWidget(PianoWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        do_first_pb = new QPushButton(centralwidget);
        do_first_pb->setObjectName(QString::fromUtf8("do_first_pb"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(do_first_pb->sizePolicy().hasHeightForWidth());
        do_first_pb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(do_first_pb);

        re_first_pb = new QPushButton(centralwidget);
        re_first_pb->setObjectName(QString::fromUtf8("re_first_pb"));
        sizePolicy.setHeightForWidth(re_first_pb->sizePolicy().hasHeightForWidth());
        re_first_pb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(re_first_pb);

        mi_first_pb = new QPushButton(centralwidget);
        mi_first_pb->setObjectName(QString::fromUtf8("mi_first_pb"));
        sizePolicy.setHeightForWidth(mi_first_pb->sizePolicy().hasHeightForWidth());
        mi_first_pb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(mi_first_pb);

        fa_first_pb = new QPushButton(centralwidget);
        fa_first_pb->setObjectName(QString::fromUtf8("fa_first_pb"));
        sizePolicy.setHeightForWidth(fa_first_pb->sizePolicy().hasHeightForWidth());
        fa_first_pb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(fa_first_pb);

        sol_first_pb = new QPushButton(centralwidget);
        sol_first_pb->setObjectName(QString::fromUtf8("sol_first_pb"));
        sizePolicy.setHeightForWidth(sol_first_pb->sizePolicy().hasHeightForWidth());
        sol_first_pb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(sol_first_pb);

        lya_first_pb = new QPushButton(centralwidget);
        lya_first_pb->setObjectName(QString::fromUtf8("lya_first_pb"));
        sizePolicy.setHeightForWidth(lya_first_pb->sizePolicy().hasHeightForWidth());
        lya_first_pb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lya_first_pb);

        si_first_pb = new QPushButton(centralwidget);
        si_first_pb->setObjectName(QString::fromUtf8("si_first_pb"));
        sizePolicy.setHeightForWidth(si_first_pb->sizePolicy().hasHeightForWidth());
        si_first_pb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(si_first_pb);

        do_second_pb = new QPushButton(centralwidget);
        do_second_pb->setObjectName(QString::fromUtf8("do_second_pb"));
        sizePolicy.setHeightForWidth(do_second_pb->sizePolicy().hasHeightForWidth());
        do_second_pb->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(do_second_pb);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 3);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setPageStep(1);
        horizontalSlider->setValue(50);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 1, 0, 1, 3);

        volume_lbl = new QLabel(centralwidget);
        volume_lbl->setObjectName(QString::fromUtf8("volume_lbl"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(volume_lbl->sizePolicy().hasHeightForWidth());
        volume_lbl->setSizePolicy(sizePolicy1);
        volume_lbl->setMinimumSize(QSize(56, 18));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        volume_lbl->setFont(font);

        gridLayout->addWidget(volume_lbl, 0, 0, 1, 1);

        volume_val_lbl = new QLabel(centralwidget);
        volume_val_lbl->setObjectName(QString::fromUtf8("volume_val_lbl"));
        sizePolicy1.setHeightForWidth(volume_val_lbl->sizePolicy().hasHeightForWidth());
        volume_val_lbl->setSizePolicy(sizePolicy1);
        volume_val_lbl->setMinimumSize(QSize(56, 18));
        volume_val_lbl->setFont(font);

        gridLayout->addWidget(volume_val_lbl, 0, 1, 1, 1);

        PianoWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(PianoWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PianoWindow->setStatusBar(statusbar);

        retranslateUi(PianoWindow);

        QMetaObject::connectSlotsByName(PianoWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PianoWindow)
    {
        PianoWindow->setWindowTitle(QCoreApplication::translate("PianoWindow", "Piano", nullptr));
        do_first_pb->setText(QString());
        re_first_pb->setText(QString());
        mi_first_pb->setText(QString());
        fa_first_pb->setText(QString());
        sol_first_pb->setText(QString());
        lya_first_pb->setText(QString());
        si_first_pb->setText(QString());
        do_second_pb->setText(QString());
        volume_lbl->setText(QCoreApplication::translate("PianoWindow", "Volume:", nullptr));
        volume_val_lbl->setText(QCoreApplication::translate("PianoWindow", "50", nullptr));
    } // retranslateUi

};

namespace Ui {
class PianoWindow: public Ui_PianoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIANOWINDOW_H
