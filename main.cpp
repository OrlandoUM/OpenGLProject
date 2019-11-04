#include <QtGui/QApplication>
#include "JanelaPrincipal.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[])
{
    srand((unsigned)time(NULL));
    QApplication a(argc, argv);
    JanelaPrincipal w;
    w.show();
    return a.exec();
}
