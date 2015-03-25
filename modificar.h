#ifndef MODIFICAR_H
#define MODIFICAR_H

#include <QDialog>
#include "productos.h"
#include <vector>
#include <QTableWidgetItem>

using std::vector;

namespace Ui {
class modificar;
}

class modificar : public QDialog
{
    Q_OBJECT

public:
    explicit modificar(vector<Productos*>*,QWidget *parent = 0);
    void agregar(Productos*);
    ~modificar();

private slots:
    void on_tb_productos_itemClicked(QTableWidgetItem *item);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_bt_terminar_clicked();

private:
    Ui::modificar *ui;
    vector<Productos*>* productos;
    int row;
};

#endif // MODIFICAR_H
