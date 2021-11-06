#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adddialog.h"
#include "ui_adddialog.h"
#include "showdialog.h"
#include "ui_showdialog.h"
#include<QString>
#include<QTextStream>
#include<QFile>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    addDialog *a=new addDialog;
    a->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    hide();
    showDialog *b= new showDialog;
    b->show();

}
