#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "secondwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString login = ui->login->text();
    QString password = ui->pass->text();

    if (login == "tempily" && password == "358901") {
        //QMessageBox::information(this, "Login", "You've logged in successfully!");
        hide();
        secondwindow window;
        window.setModal(true);
        window.exec();
    } else {
        QMessageBox::warning(this, "Error", "Incorrect username or password.");
    }
}
