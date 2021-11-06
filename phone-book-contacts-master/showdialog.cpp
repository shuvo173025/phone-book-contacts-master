#include "showdialog.h"
#include "ui_showdialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>
#include<QFile>

showDialog::showDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::showDialog)
{
    ui->setupUi(this);
    QString n="C:\\Users\\Shuvo Patowari\\Documents\\jahid-masud\\New folder\\my.txt";
    QFile file(n);
    if(file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
    QTextStream in(&file);
    QString r=in.readAll();
    ui->plainTextEdit->setPlainText(r);
    }
    file.close();

}


showDialog::~showDialog()
{
    delete ui;
}

void showDialog::on_pushButton_clicked()
{
    hide();
    MainWindow *a=new MainWindow;
    a->show();
}
