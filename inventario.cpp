#include "inventario.h"
#include "ui_inventario.h"
#include "agregarproducto.h"
#include "eliminar.h"
#include "productos.h"
#include "qtableview.h"
#include "ui_eliminar.h"
#include "modificar.h"
#include "verinventario.h"

using std::vector;

Inventario::Inventario(vector<Productos*>* p,vector<usuario>* u,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inventario)
{
    productos = p;
    usuarios = u;
    ui->setupUi(this);

}

Inventario::~Inventario()
{
    delete ui;
}

void Inventario::on_pushButton_clicked()
{
    agregarProducto a(productos);
    a.exec();
}

void Inventario::on_pushButton_2_clicked()
{
    eliminar e(productos);
    e.exec();


}

void Inventario::on_pushButton_3_clicked()
{
    modificar m(productos);
    m.exec();
}

void Inventario::on_pushButton_4_clicked()
{
    verInventario v(productos);
    v.exec();
}
