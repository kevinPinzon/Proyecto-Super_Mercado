#ifndef ELIMINAR_H
#define ELIMINAR_H

#include <QDialog>
#include <productos.h>
#include <vector>
#include <QTableWidgetItem>

using std::vector;

namespace Ui {
class eliminar;
}

class eliminar : public QDialog
{
    Q_OBJECT

public:
    Ui::eliminar *ui;
    explicit eliminar(vector <Productos*>*,QWidget *parent = 0);
    ~eliminar();

private:

    vector<Productos*>* productos;
    int row;
protected:


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_tb_productos_itemActivated(QTableWidgetItem *item);
    void on_tb_productos_itemClicked(QTableWidgetItem *item);
};

#endif // ELIMINAR_H
