#include "tiny6410dialog.h"
#include "ui_tiny6410dialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

tiny6410Dialog::tiny6410Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tiny6410Dialog)
{
    tiny6410AdcDialog = new adcDialog;
    ADCplotter = new MainWindow;

    ui->setupUi(this);

    /* without border */
    //this->setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);

    QObject::connect(ui->adcButton, SIGNAL(clicked()), tiny6410AdcDialog, SLOT(show()));
    QObject::connect(ui->adcPltBtn, SIGNAL(clicked()), ADCplotter, SLOT(show()));
}

tiny6410Dialog::~tiny6410Dialog()
{
    delete tiny6410AdcDialog;
    delete ui;
}
