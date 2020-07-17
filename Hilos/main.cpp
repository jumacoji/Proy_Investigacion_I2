#include "maindialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainDialog w;                   //Aqui se encuentra el hilo
    w.show();
    return a.exec();
}
/*Como se puede apreciar se hace el uso de dos procesos los cuales son las ventanas y el ciclo de 0 a 1000000
 * en el mismo periodo de tiempo por ende se hace el uso de hilos*/
