#include <iostream>
#include <string>
#include "unuevo.h"
#include "ui_unuevo.h"

using namespace std;

unuevo::unuevo(vector<usuario>* u, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::unuevo)
{
    ui->setupUi(this);
    usuarios=u;
}

unuevo::~unuevo()
{
    delete ui;
}

void unuevo::on_bt_crear_clicked()
{
    if(ui->confi->text().toStdString()==ui->contra->text().toStdString()){
        string nombre=ui->nombre->text().toStdString();
        string contra = ui->contra->text().toStdString();
        usuario a(nombre, contra);
        usuarios->push_back(a);
        this->close();
    }else
        cout<<endl<<"contraseñas distintas "<<endl;
}
