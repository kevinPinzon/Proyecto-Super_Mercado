#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inventario.h"
#include "unuevo.h"
#include "usuario.h"
#include <vector>
#include <iostream>
#include <productos.h>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    productos = new vector<Productos*>();
    usuarios = new vector<usuario>();
    ui->setupUi(this);
    row=1;

}

MainWindow::~MainWindow()
{
    delete ui;
    delete usuarios;

    for(int i=0; i<productos->size(); i++)
        delete productos->at(i);
}

void MainWindow::on_pushButton_clicked()
{
    unuevo a(usuarios);
    a.exec();

}

void MainWindow::on_pushButton_2_clicked()
{
    string nombre = ui->lineEdit->text().toStdString();
    string contra = ui->lineEdit_2->text().toStdString();

    for(int i=0; i<usuarios->size(); i++){

        if((*usuarios)[i].getNombre()==nombre && (*usuarios)[i].getContrasena()==contra){
            Inventario b (productos,usuarios);
            b.exec();
        }else
            cout<<"\nusuario/contraseña erronea\n";
    }

    ui->lineEdit->setText(NULL);
    ui->lineEdit_2->setText(NULL);

}



void MainWindow::on_pushButton_3_destroyed()
{
    for(int i=0; i<productos->size(); i++)
        delete productos->at(i);

}
