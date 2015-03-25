#ifndef UNUEVO_H
#define UNUEVO_H

#include <QDialog>
#include <vector>
#include "usuario.h"

using std::vector;

namespace Ui {
class unuevo;
}

class unuevo : public QDialog
{
    Q_OBJECT

public:
    explicit unuevo(vector<usuario>* , QWidget *parent = 0);
    ~unuevo();

private slots:
    void on_bt_crear_clicked();

private:
    Ui::unuevo *ui;
    vector<usuario>* usuarios;
};

#endif // UNUEVO_H
