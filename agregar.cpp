#include "agregar.h"
#include "ui_agregar.h"

#include <iostream>

using namespace std;

agregar::agregar(vector<usuario>* u,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregar)
{
    Usuarios=u;
    ui->setupUi(this);
}

agregar::~agregar()
{
    delete ui;
}

void agregar::on_pushButton_clicked()
{
     if(ui->radioButton->isChecked()){
        cout<<"\nalimentos\n";
    }

    if(ui->radioButton_2->isChecked()){

    }

    }


