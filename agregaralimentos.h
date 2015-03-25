#ifndef AGREGARALIMENTOS_H
#define AGREGARALIMENTOS_H

#include <QDialog>

namespace Ui {
class agregarALimentos;
}

class agregarALimentos : public QDialog
{
    Q_OBJECT

public:
    explicit agregarALimentos(QWidget *parent = 0);
    ~agregarALimentos();

private:
    Ui::agregarALimentos *ui;
};

#endif // AGREGARALIMENTOS_H
