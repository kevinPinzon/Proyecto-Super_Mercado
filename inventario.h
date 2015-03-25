#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "usuario.h"
#include "productos.h"
#include <vector>
#include <QDialog>

using std::vector;

namespace Ui {
class Inventario;
}

class Inventario : public QDialog
{
    Q_OBJECT

public:
    explicit Inventario(vector<Productos*>*,vector<usuario>* = 0,QWidget *parent = 0);
    ~Inventario();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Inventario *ui;
    vector<Productos*>* productos;
    vector<usuario>* usuarios;
};

#endif // INVENTARIO_H
