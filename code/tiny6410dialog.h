#ifndef TINY6410DIALOG_H
#define TINY6410DIALOG_H

#include <QDialog>
#include <QCloseEvent>
#include <QTimer>
#include "adcdialog.h"
#include "mainwindow.h"

namespace Ui {
class tiny6410Dialog;
}

class tiny6410Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit tiny6410Dialog(QWidget *parent = 0);
    ~tiny6410Dialog();

private:
    Ui::tiny6410Dialog *ui;
    adcDialog *tiny6410AdcDialog;
    MainWindow *ADCplotter;
};

#endif // TINY6410DIALOG_H
