#include "gestionar.h"
#include "ui_gestionar.h"

gestionar::gestionar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionar)
{
    ui->setupUi(this);
}

gestionar::~gestionar()
{
    delete ui;
}
