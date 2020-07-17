#include "hijodialog.h"
#include "ui_hijodialog.h"
#include "thread_numeros.h"


HijoDialog::HijoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HijoDialog)
{
    ui->setupUi(this);
    mThread = new Thread_numeros(this);
    mThread->start(QThread::HighestPriority); //Aqui se le da mayor prioridad a mthread
    connect(mThread, &Thread_numeros::numeroNuevo, [&](int n){ //Se hace a parte el procesos de los numeros
        ui->listWidget->addItem(QString::number(n));
    });

    /*for (int i=0;i<1000000;i++){            //Inicialmente se intenta llenar una lista con un millon de numeros
        ui->listWidget->addItem(QString::number(i)); //Pero es bastante tardado, ya que primero llena los numeros
    } */                                             //Y luego muestra las ventanas
                                                     //para esto se usa la clase thread_numeros
}

HijoDialog::~HijoDialog()
{
    delete ui;
}
