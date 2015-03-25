#ifndef AGREGAR_H
#define AGREGAR_H
#include "usuario.h"
#include <QDialog>
#include <vector>

using namespace std;

namespace Ui {
class agregar;
}

class agregar : public QDialog
{
    Q_OBJECT

public:
    explicit agregar(vector<usuario>* , QWidget *parent = 0);
    ~agregar();

private slots:
    void on_pushButton_clicked();

private:
    Ui::agregar *ui;
    vector<usuario>* Usuarios;
};

#endif // AGREGAR_H
