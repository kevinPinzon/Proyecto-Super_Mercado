#include "verinventario.h"
#include "ui_verinventario.h"
#include "productos.h"
#include <QStandardItemModel>
#include <QTableWidgetItem>
#include <string>
#include <sstream>
#include <iostream>

using std::vector;
using std::stringstream;
using std::ostream;
using namespace std;

verInventario::verInventario(vector<Productos*>* p, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::verInventario)
{
    ui->setupUi(this);
    productos=p;
}

verInventario::~verInventario()
{
    delete ui;
}

void verInventario::on_tb_productos_itemClicked(QTableWidgetItem *item)
{
        row= item->row();
}

void verInventario::on_pushButton_clicked()
{



    ui->tb_productos->model()->removeRows(0,100);
    int tablesize = productos->size();
    ui->tb_productos->setRowCount(tablesize);

    for(int i=0; i<productos->size(); i++){
            string caducidad= (*productos)[i]->getCaducidad();
            stringstream cantidad,precio;
            cantidad<<(*productos)[i]->getCantidad()<<" ";
            precio<<"$ "<<(*productos)[i]->precio();
            string nombre=(*productos)[i]->getNombre();

            ui->tb_productos->setItem(i,0,new QTableWidgetItem(nombre .data()));
            ui->tb_productos->setItem(i,1,new QTableWidgetItem(precio.str().data()));
            ui->tb_productos->setItem(i,2,new QTableWidgetItem(cantidad.str().data()));
            ui->tb_productos->setItem(i,3,new QTableWidgetItem(caducidad.data()));
    }
    stringstream ss;
    total=0;
    for(int i=0; i<productos->size(); i++)
        total+=(*productos)[i]->precio();

    cout<<"\ntotal\n"<<total;
    ss<<productos->size()<<" con un valor total de: "<<total<<"$";

    ui->lb_productos->setText(ss.str().c_str());
}
