#ifndef VERINVENTARIO_H
#define VERINVENTARIO_H

#include <QDialog>
#include "productos.h"
#include <vector>
#include <QTableWidgetItem>

using std::vector;
namespace Ui {
class verInventario;
}

class verInventario : public QDialog
{
    Q_OBJECT

public:
    explicit verInventario(vector<Productos*>*,QWidget *parent = 0);
    ~verInventario();

private slots:
    void on_tb_productos_itemClicked(QTableWidgetItem *item);

    void on_pushButton_clicked();

private:
    Ui::verInventario *ui;
    int row;
    double total;
    vector<Productos*>* productos;
};

#endif // VERINVENTARIO_H
