#include "thread_numeros.h"

Thread_numeros::Thread_numeros(QObject *parent) : QThread(parent)
{

}

Thread_numeros::~Thread_numeros()
{

}

void Thread_numeros::run()
{
    for (int i=0;i<1000000;i++){
        emit numeroNuevo(i);
        msleep(100); //Se duerme el programa 100 milisegundos para que no se interrumpa el progrma
    }
}
