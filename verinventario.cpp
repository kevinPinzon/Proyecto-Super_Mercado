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
    ui->tb_productos->setRowCount(productos->size());

    for(int i=0; i<productos->size(); i++){
            string caducidad= (*productos)[i]->getCaducidad();
            stringstream cantidad,precio;
            cantidad<<" "<<(*productos)[i]->getCantidad();
            precio<<"$ "<<(*productos)[i]->precio();
            string nombre=(*productos)[i]->getNombre();

            ui->tb_productos->insertRow(ui->tb_productos->rowCount());

            ui->tb_productos->setItem(ui->tb_productos->rowCount()-productos->size()-1,0,new QTableWidgetItem(nombre .data()));
            ui->tb_productos->setItem(ui->tb_productos->rowCount()-productos->size()-1,1,new QTableWidgetItem(precio.str().data()));
            ui->tb_productos->setItem(ui->tb_productos->rowCount()-productos->size()-1,2,new QTableWidgetItem(cantidad.str().data()));
            ui->tb_productos->setItem(ui->tb_productos->rowCount()-productos->size()-1,3,new QTableWidgetItem(caducidad.data()));
          //  ui->tb_productos->setItem(ui->tb_productos->rowCount()-productos->size()-1,4,new QTableWidgetItem("tipo x"));
    }
    stringstream ss;
    total=0;
    for(int i=0; i<productos->size(); i++)
        total+=(*productos)[i]->precio();

    cout<<"\ntotal\n"<<total;
    ss<<productos->size()<<" con un valor total de: "<<total<<"$";

    ui->lb_productos->setText(ss.str().c_str());
}
