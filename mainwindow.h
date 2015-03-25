#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "usuario.h"
#include <QMainWindow>
#include <vector>
#include "productos.h"

using std::vector;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_3_destroyed();

private:
    Ui::MainWindow *ui;
    vector<usuario>* usuarios;
    vector<Productos*>* productos;
    int row;
};

#endif // MAINWINDOW_H
