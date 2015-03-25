#include "agregarproducto.h"
#include "ui_agregarproducto.h"
#include <iostream>
#include <vector>

#include "frutas.h"
#include "vegetales.h"
#include "postres.h"
#include "granos.h"
#include "congelados.h"
#include "carnes.h"
#include "sodas.h"
#include "alcohol.h"
#include "agua.h"
#include "jugos.h"
#include "productos.h"
#include <string>

//using std::vector;
//using std::ostream;
using namespace std;

void agregarProducto::agregar(Productos* nuevoProducto){
    this->productos->push_back(nuevoProducto);

}

agregarProducto::agregarProducto(vector<Productos*>* p,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregarProducto)
{
    this->productos = p;
    ui->setupUi(this);
}

agregarProducto::~agregarProducto()
{
    delete ui;
}

void agregarProducto::on_pushButton_clicked()
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

    for(int i=0; i<productos->size();i++)
        cout<<i<<(*productos)[i]->toString()<<"\n";

    ui->txt_nombreP->setText(NULL);
    ui->sp_precio->setValue(1);
    ui->sp_cantidad->setValue(10);
    ui->txt_color->setText(NULL);
    ui->txt_marca->setText(NULL);
}
