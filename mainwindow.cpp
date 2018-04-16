#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("Ready!");
    qDebug() << "Hello";
    connect(ui->dial,SIGNAL(valueChanged(int)), ui->lcdNumber,SLOT(display(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAdd_clicked()
{
    double c;
    ui->label->setText("Add");
    c = ui->a->value()+ui->b->value();
    ui->textBrowser->append("Add: " + QString::number(c));
}

void MainWindow::on_pushButtonSub_clicked()
{
    double c;
    ui->label->setText("Sub");
    c = ui->a->value() - ui->b->value();
    ui->textBrowser->append("Sub: " + QString::number(c));
}

void MainWindow::on_pushButtonMul_clicked()
{
    double c;
    ui->label->setText("Mul");
    c = ui->a->value() * ui->b->value();
    ui->textBrowser->append("Mul: " + QString::number(c));
}

void MainWindow::on_pushButtonDiv_clicked()
{
    double c;
    ui->label->setText("Div");
    if (ui->b->value() != 0.0)
    {
        c = ui->a->value()/ui->b->value();
        ui->textBrowser->append("Div: " + QString::number(c));
    }
    else
    {
        QMessageBox msg;
        msg.setWindowTitle("Warning!");
        msg.setText("Undefined: Division by zero!");
        msg.exec();
    }
}

void MainWindow::on_actionExit_triggered()
{
    qApp->exit();
}

void MainWindow::on_pushButton_clicked()
{
       ;
}
