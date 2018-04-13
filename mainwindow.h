#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButtonAdd_clicked();

    void on_pushButtonSub_clicked();

    void on_pushButtonMul_clicked();

    void on_pushButtonDiv_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
