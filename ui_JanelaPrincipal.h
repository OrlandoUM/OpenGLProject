/********************************************************************************
** Form generated from reading UI file 'JanelaPrincipal.ui'
**
** Created: Tue 2. Oct 23:37:16 2018
**      by: Qt User Interface Compiler version 4.6.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAPRINCIPAL_H
#define UI_JANELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "MeuPainelOpenGL.h"

QT_BEGIN_NAMESPACE

class Ui_JanelaPrincipal
{
public:
    QGridLayout *gridLayout;
    MeuPainelOpenGL *painelGL;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinBox_Malha;
    QCheckBox *checkBox_Malha;
    QLabel *label_5;
    QSpinBox *spinBox_5;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_4;

    void setupUi(QWidget *JanelaPrincipal)
    {
        if (JanelaPrincipal->objectName().isEmpty())
            JanelaPrincipal->setObjectName(QString::fromUtf8("JanelaPrincipal"));
        JanelaPrincipal->resize(1369, 832);
        gridLayout = new QGridLayout(JanelaPrincipal);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        painelGL = new MeuPainelOpenGL(JanelaPrincipal);
        painelGL->setObjectName(QString::fromUtf8("painelGL"));

        gridLayout->addWidget(painelGL, 0, 0, 15, 1);

        label = new QLabel(JanelaPrincipal);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        spinBox = new QSpinBox(JanelaPrincipal);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximumSize(QSize(75, 20));
        spinBox->setMinimum(3);
        spinBox->setMaximum(60);

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        label_2 = new QLabel(JanelaPrincipal);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(JanelaPrincipal);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMaximumSize(QSize(75, 20));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(1);
        doubleSpinBox->setMaximum(10);
        doubleSpinBox->setSingleStep(0.1);

        gridLayout->addWidget(doubleSpinBox, 3, 1, 1, 1);

        label_3 = new QLabel(JanelaPrincipal);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 1, 1, 1);

        label_4 = new QLabel(JanelaPrincipal);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 8, 1, 1, 1);

        spinBox_Malha = new QSpinBox(JanelaPrincipal);
        spinBox_Malha->setObjectName(QString::fromUtf8("spinBox_Malha"));
        spinBox_Malha->setMaximumSize(QSize(75, 20));
        spinBox_Malha->setMinimum(0);
        spinBox_Malha->setMaximum(25);
        spinBox_Malha->setValue(25);

        gridLayout->addWidget(spinBox_Malha, 9, 1, 1, 1);

        checkBox_Malha = new QCheckBox(JanelaPrincipal);
        checkBox_Malha->setObjectName(QString::fromUtf8("checkBox_Malha"));
        checkBox_Malha->setAutoRepeatInterval(100);

        gridLayout->addWidget(checkBox_Malha, 10, 1, 1, 1);

        label_5 = new QLabel(JanelaPrincipal);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 11, 1, 1, 1);

        spinBox_5 = new QSpinBox(JanelaPrincipal);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setMaximum(5);

        gridLayout->addWidget(spinBox_5, 12, 1, 1, 1);

        verticalSpacer = new QSpacerItem(72, 270, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 13, 1, 1, 1);

        pushButton = new QPushButton(JanelaPrincipal);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(75, 23));

        gridLayout->addWidget(pushButton, 14, 1, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(JanelaPrincipal);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setMaximumSize(QSize(75, 20));
        doubleSpinBox_3->setMaximum(1);
        doubleSpinBox_3->setSingleStep(0.01);

        gridLayout->addWidget(doubleSpinBox_3, 6, 1, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(JanelaPrincipal);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMaximumSize(QSize(75, 20));
        doubleSpinBox_2->setMaximum(1);
        doubleSpinBox_2->setSingleStep(0.01);
        doubleSpinBox_2->setValue(1);

        gridLayout->addWidget(doubleSpinBox_2, 5, 1, 1, 1);

        doubleSpinBox_4 = new QDoubleSpinBox(JanelaPrincipal);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setMaximumSize(QSize(75, 20));
        doubleSpinBox_4->setDecimals(2);
        doubleSpinBox_4->setMaximum(1);
        doubleSpinBox_4->setSingleStep(0.01);

        gridLayout->addWidget(doubleSpinBox_4, 7, 1, 1, 1);


        retranslateUi(JanelaPrincipal);
        QObject::connect(pushButton, SIGNAL(clicked()), JanelaPrincipal, SLOT(close()));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), painelGL, SLOT(alterarLados(int)));
        QObject::connect(doubleSpinBox, SIGNAL(valueChanged(double)), painelGL, SLOT(alterarRaio(double)));
        QObject::connect(spinBox_Malha, SIGNAL(valueChanged(int)), painelGL, SLOT(alterarMalha(int)));
        QObject::connect(checkBox_Malha, SIGNAL(clicked(bool)), painelGL, SLOT(ocultarMalha(bool)));
        QObject::connect(spinBox_5, SIGNAL(valueChanged(int)), painelGL, SLOT(numeroPoligonos(int)));
        QObject::connect(doubleSpinBox_4, SIGNAL(valueChanged(double)), painelGL, SLOT(setCorAzul(double)));
        QObject::connect(doubleSpinBox_3, SIGNAL(valueChanged(double)), painelGL, SLOT(setCorVerde(double)));
        QObject::connect(doubleSpinBox_2, SIGNAL(valueChanged(double)), painelGL, SLOT(setCorVermelho(double)));

        QMetaObject::connectSlotsByName(JanelaPrincipal);
    } // setupUi

    void retranslateUi(QWidget *JanelaPrincipal)
    {
        JanelaPrincipal->setWindowTitle(QApplication::translate("JanelaPrincipal", "Projeto OpenGL", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("JanelaPrincipal", "Lados:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("JanelaPrincipal", "Raio", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("JanelaPrincipal", "Cor", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("JanelaPrincipal", "Malha:", 0, QApplication::UnicodeUTF8));
        checkBox_Malha->setText(QApplication::translate("JanelaPrincipal", "Ocultar Malha", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("JanelaPrincipal", "Poligonos:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("JanelaPrincipal", "Sair", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class JanelaPrincipal: public Ui_JanelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAPRINCIPAL_H
