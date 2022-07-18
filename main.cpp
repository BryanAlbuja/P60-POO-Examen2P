#include "juego.h"

#include <QApplication>


/*
 Bryan Albuja
 0950442905
*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Juego w;
    w.show();
    return a.exec();
}
