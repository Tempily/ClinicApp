#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QMessageBox>

secondwindow::secondwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::secondwindow)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./testDB.bd  ");

    if (db.open()) {
        qDebug("open");
    }else{
        qDebug("no open");
    }


    query = new QSqlQuery(db);
    query->exec("CREATE TABLE Patients(Firstname TEXT,Lastname TEXT,Age INT,Day UNIX,);");

    model = new QSqlTableModel(this,db);
    model ->setTable("Patients");
    model ->select();
    ui->tableView->setModel(model);

}

secondwindow::~secondwindow()
{
    delete ui;
}

void secondwindow::on_pushButton_clicked()
{
    model->insertRow(model->rowCount());

    if (!model->submitAll()) {
        qDebug() << "Error inserting row: " << model->lastError().text();
    }
}


void secondwindow::on_pushButton_2_clicked()
{
    model->removeRow(row);
}


void secondwindow::on_tableView_clicked(const QModelIndex &index)
{
    row=index.row();
}


void secondwindow::on_pushButton_3_clicked()
{
  QMessageBox::information(this, "Error", "Incorrect username or password.");
}

