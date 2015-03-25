#include "nuevousuario.h"
#include "ui_nuevousuario.h"
#include <iostream>
#include <string>

using namespace std;


nuevoUsuario::nuevoUsuario(vector<usuario>* u,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nuevoUsuario)
{
    usuarios=u;
    ui->setupUi(this);
}

nuevoUsuario::~nuevoUsuario()
{
    delete ui;
}
/*
void nuevoUsuario::on_buttonBox_clicked()
{

    if(ui->lineEdit_3->text().toStdString()==ui->lineEdit_2->text().toStdString()){
        string nombre=ui->txt_name->text().toStdString();
        string contra = ui->lineEdit_2->text().toStdString();
        usuario a(nombre, contra);
        usuarios->push_back(a);
        this->close();
    }else
        cout<<endl<<"contraseñas distintas "<<endl;
}

void nuevoUsuario::on_pushButton_clicked(){

    if(ui->lineEdit_3->text().toStdString()==ui->lineEdit_2->text().toStdString()){
        string nombre=ui->txt_name->text().toStdString();
        string contra = ui->lineEdit_2->text().toStdString();
        usuario a(nombre, contra);
        usuarios->push_back(a);
    }else
        cout<<endl<<"contraseñas distintas "<<endl;


}
*/
