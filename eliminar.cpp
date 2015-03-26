#include "eliminar.h"
#include "ui_eliminar.h"
#include "productos.h"
#include <QStandardItemModel>
#include <QTableWidgetItem>
#include <string>
#include <sstream>

using std::vector;

eliminar::eliminar(vector<Productos*>* p,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::eliminar)
{
    ui->setupUi(this);
    productos=p;
}

eliminar::~eliminar()
{
    delete ui;
}

void eliminar::on_pushButton_clicked()
{


    //for(int i=0; i<ui->tb_productos->rowCount();i++){
    //    ui->tb_productos->removeRow(i);
    //}

//    while (ui->tb_productos->rowCount())
//            ui->tb_productos->removeRow(ui->tb_productos->rowCount()-1);

//    ui->tb_productos->clear();
  //  ui->tb_productos->setRowCount(0);
    //ui->tb_productos->insertRow(0);

    ui->tb_productos->clear();
    ui->tb_productos->clearContents();
    ui->tb_productos->setRowCount(this->productos->size());

//    ui->tb_productos->setRowCount(0);

    for(int i=0; i<this->productos->size(); i++){
            string caducidad= (*productos)[i]->getCaducidad();
            stringstream cantidad,precio;
            cantidad<<(*productos)[i]->getCantidad()<<" ";
            precio<<"$ "<<(*productos)[i]->precio();
            string nombre=(*productos)[i]->getNombre();

            ui->tb_productos->insertRow(ui->tb_productos->rowCount());

            ui->tb_productos->setItem(i,0,new QTableWidgetItem(nombre .data()));
            ui->tb_productos->setItem(i,1,new QTableWidgetItem(precio.str().data()));
            ui->tb_productos->setItem(i,2,new QTableWidgetItem(cantidad.str().data()));
            ui->tb_productos->setItem(i,3,new QTableWidgetItem(caducidad.data()));
    }

}

void eliminar::on_pushButton_2_clicked()
{
    if(productos->size()!=0){
       ui->tb_productos->removeRow(row);
       productos->erase(productos->begin()+row);
    }
}


void eliminar::on_tb_productos_itemClicked(QTableWidgetItem *item)
{
    row= item->row();

}
