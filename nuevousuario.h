#ifndef NUEVOUSUARIO_H
#define NUEVOUSUARIO_H

#include "usuario.h"

#include <QDialog>
#include <vector>

using std::vector;
namespace Ui {
class nuevoUsuario;
}

class nuevoUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit nuevoUsuario(vector<usuario>*,QWidget *parent = 0);
    ~nuevoUsuario();

private slots:
    void on_buttonBox_accepted();

    void on_pushButton_clicked();

    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::nuevoUsuario *ui;
    vector<usuario>* usuarios;
};

#endif // NUEVOUSUARIO_H
