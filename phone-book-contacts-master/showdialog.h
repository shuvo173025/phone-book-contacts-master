#ifndef SHOWDIALOG_H
#define SHOWDIALOG_H

#include <QDialog>
#include<QString>

namespace Ui {
class showDialog;
}

class showDialog : public QDialog
{
    Q_OBJECT

public:
    explicit showDialog(QWidget *parent = 0);
    ~showDialog();
    QString name;
     QString number;
      QString email;



private slots:
    void on_pushButton_clicked();

private:
    Ui::showDialog *ui;
};

#endif // SHOWDIALOG_H
