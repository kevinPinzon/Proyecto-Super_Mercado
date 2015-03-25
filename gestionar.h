#ifndef GESTIONAR_H
#define GESTIONAR_H

#include <QDialog>

namespace Ui {
class gestionar;
}

class gestionar : public QDialog
{
    Q_OBJECT

public:
    explicit gestionar(QWidget *parent = 0);
    ~gestionar();

private:
    Ui::gestionar *ui;
};

#endif // GESTIONAR_H
