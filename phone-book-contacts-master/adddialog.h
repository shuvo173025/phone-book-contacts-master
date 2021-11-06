#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include<QString>
#include<fstream>
namespace Ui {
class addDialog;
}

class addDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addDialog(QWidget *parent = 0);
    ~addDialog();
    QString name[10];
    QString number[10];
    QString email[10];

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addDialog *ui;
};

#endif // ADDDIALOG_H
