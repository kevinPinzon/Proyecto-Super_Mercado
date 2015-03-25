#include "agregaralimentos.h"
#include "ui_agregaralimentos.h"

agregarALimentos::agregarALimentos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregarALimentos)
{
    ui->setupUi(this);
}

agregarALimentos::~agregarALimentos()
{
    delete ui;
}
