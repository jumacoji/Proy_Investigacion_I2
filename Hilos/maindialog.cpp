#include "maindialog.h"
#include "ui_maindialog.h"
#include "hijodialog.h"

MainDialog::MainDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainDialog)
{
    ui->setupUi(this);
    mHijoDialog = new HijoDialog(this);
    mHijoDialog->show();                //Se muestra la ventana dialog hijo junto con la ventana mainDialog
}

MainDialog::~MainDialog()
{
    delete ui;
}

