#include "modificar.h"
#include "ui_modificar.h"
#include "agregarproducto.h"
//#include <iostream>

#include <QStandardItemModel>
#include <QTableWidgetItem>
#include <QTime>

#include "sodas.h"
#include "jugos.h"
#include "agua.h"
#include "alcohol.h"
#include "frutas.h"
#include "vegetales.h"
#include "postres.h"
#include "granos.h"
#include "congelados.h"
#include "carnes.h"

void modificar::agregar(Productos* nuevoProducto){
    this->productos->push_back(nuevoProducto);

}

modificar::modificar(vector<Productos*>* p, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modificar)
{
    productos = p;
    ui->setupUi(this);
}

modificar::~modificar()
{
    delete ui;
}

void modificar::on_tb_productos_itemClicked(QTableWidgetItem *item)
{
    row= item->row();
   // QTableWidgetItem *nombre = ui->tb_productos->item(row,0);
   // QTableWidgetItem *cantidad = ui->tb_productos->item(row,1);
    //QTableWidgetItem *precio = ui->tb_productos->item(row,2);
    //QTableWidgetItem *caducidad = ui->tb_productos->item(row,3);



    string nombre=(*productos)[row]->getNombre();
    int cantidad =(*productos)[row]->getCantidad();
    int precio=(*productos)[row]->precio();
    //string caducidad= (*productos)[row]->getCaducidad();
    ui->txt_nombreP->setText(nombre.c_str());
    ui->sp_precio->setValue(precio);
    ui->sp_cantidad->setValue(cantidad);
    //ui->sp_caducidad->setTime(caducidad);
}

void modificar::on_pushButton_clicked()
{

    for(int i=0; i<ui->tb_productos->rowCount();i++){
        ui->tb_productos->removeRow(i);
    }


    ui->tb_productos->setRowCount(productos->size());

    for(int i=0; i<productos->size(); i++){

            string caducidad = (*productos)[i]->getCaducidad();
            stringstream cantidad,precio;
            cantidad<<(*productos)[i]->getCantidad()<<" ";
            precio<<"$ "<<(*productos)[i]->precio();
            string nombre=(*productos)[i]->getNombre();

            ui->tb_productos->insertRow(ui->tb_productos->rowCount());

            ui->tb_productos->setItem(ui->tb_productos->rowCount()-productos->size()-1,0,new QTableWidgetItem(nombre .data()));
            ui->tb_productos->setItem(ui->tb_productos->rowCount()-productos->size()-1,1,new QTableWidgetItem(precio.str().data()));
            ui->tb_productos->setItem(ui->tb_productos->rowCount()-productos->size()-1,2,new QTableWidgetItem(cantidad.str().data()));
            ui->tb_productos->setItem(ui->tb_productos->rowCount()-productos->size()-1,3,new QTableWidgetItem(caducidad.data()));
    }

}

void modificar::on_bt_terminar_clicked()
{



    string nombre=ui->txt_nombreP->text().toStdString();
    double precioUnidad=ui->sp_precio->value();
    string caducidad=ui->sp_caducidad->text().toStdString();
    int cantidad=ui->sp_cantidad->value();
    string color=ui->txt_color->text().toStdString();
    string marca=ui->txt_marca->text().toStdString();

    if(ui->rd_frutas->isChecked()){
        Frutas* nuevo= new  Frutas(nombre,precioUnidad,caducidad,cantidad,color);
        agregar(nuevo);
    }
    if(ui->rd_vegetales->isChecked()){
       vegetales* nuevo= new vegetales(nombre,precioUnidad,caducidad,cantidad,color);
        agregar(nuevo);
    }
    if(ui->rd_postres->isChecked()){
       Postres* nuevo= new Postres(nombre,precioUnidad,caducidad,cantidad,color);
        agregar(nuevo);
    }
    if(ui->rd_carnes->isChecked()){
       Carnes* nuevo= new Carnes(nombre,precioUnidad,caducidad,cantidad,color);
        agregar(nuevo);
    }
    if(ui->rd_congelados->isChecked()){
       Congelados* nuevo = new Congelados(nombre,precioUnidad,caducidad,cantidad,color);
        agregar(nuevo);
    }
    if(ui->rd_granos->isChecked()){
       Granos* nuevo= new Granos(nombre,precioUnidad,caducidad,cantidad,color);
        agregar(nuevo);
    }
    if(ui->rd_sodas->isChecked()){
       Sodas* nuevo = new Sodas(nombre,precioUnidad,caducidad,cantidad,marca);
        agregar(nuevo);
    }
    if(ui->rd_alcohol->isChecked()){
       Alcohol* nuevo = new Alcohol(nombre,precioUnidad,caducidad,cantidad,marca);
        agregar(nuevo);
    }
    if(ui->rd_agua->isChecked()){
       Agua* nuevo = new Agua(nombre,precioUnidad,caducidad,cantidad,marca);
        agregar(nuevo);
    }
    if(ui->rd_jugos->isChecked()){
       Jugos* nuevo = new Jugos(nombre,precioUnidad,caducidad,cantidad,marca);
        agregar(nuevo);
    }

    ui->tb_productos->removeRow(row);
    productos->erase(productos->begin()+row);

    ui->txt_nombreP->setText(NULL);
    ui->sp_precio->setValue(1);
    ui->sp_cantidad->setValue(10);
    ui->txt_color->setText(NULL);
    ui->txt_marca->setText(NULL);

}
