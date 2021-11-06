#include "dialogadfh.h"
#include "ui_dialogadfh.h"

Dialogadfh::Dialogadfh(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogadfh)
{
    ui->setupUi(this);
}

Dialogadfh::~Dialogadfh()
{
    delete ui;
}
