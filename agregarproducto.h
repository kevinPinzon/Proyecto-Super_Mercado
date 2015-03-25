#ifndef AGREGARPRODUCTO_H
#define AGREGARPRODUCTO_H

#include <QDialog>
#include <vector>
#include "productos.h"

using std::vector;

namespace Ui {
class agregarProducto;
}

class agregarProducto : public QDialog
{
    Q_OBJECT

public:
    explicit agregarProducto(vector<Productos*>* =0,QWidget *parent = 0);
    void agregar(Productos*);
    ~agregarProducto();

private slots:
    void on_pushButton_clicked();

private:
    Ui::agregarProducto *ui;
    vector<Productos*>* productos;
};

#endif // AGREGARPRODUCTO_H
