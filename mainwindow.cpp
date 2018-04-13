#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAdd_clicked()
{
    double c;
    c = ui->a->value()+ui->b->value();
    ui->lcdNumber->display(c);
}

void MainWindow::on_pushButtonSub_clicked()
{
    double c;
    c = ui->a->value() - ui->b->value();
    ui->lcdNumber->display(c);
}

void MainWindow::on_pushButtonMul_clicked()
{
    double c;
    c = ui->a->value() * ui->b->value();
    ui->lcdNumber->display(c);
}

void MainWindow::on_pushButtonDiv_clicked()
{
    double c;
    if (ui->b->value() != 0.0)
        c = ui->a->value()/ui->b->value();
    else
        c = 0.0;
    ui->lcdNumber->display(c);
}
