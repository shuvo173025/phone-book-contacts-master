#include "adddialog.h"
#include "ui_adddialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>
#include<QTextStream>
#include<QFile>
addDialog::addDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addDialog)
{
    ui->setupUi(this);

}

addDialog::~addDialog()
{
    delete ui;
}

void addDialog::on_pushButton_clicked()
{
    hide();
    MainWindow *a=new MainWindow;
    a->show();
}

void addDialog::on_pushButton_2_clicked()
{

    QString name=ui->lineEdit->text();
    QString number=ui->lineEdit_2->text();
    QString email=ui->lineEdit_3->text();


    QString n="C:\\Users\\Shuvo Patowari\\Documents\\jahid-masud\\New folder\\my.txt";
QFile file(n);
if(file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append))
{
    QTextStream out(&file);
    out<<name<<"\n"<<number<<"\n"<<email<<"\n"<<endl;

}
file.close();

    hide();
    addDialog *c=new addDialog;
    c->show();



}
