#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "proxyimage.h"
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->path = "";
    ui->setupUi(this);
    ui->widthEdit->setValidator( new QIntValidator(0, 1000, this) );
    ui->heightEdit->setValidator( new QIntValidator(0, 700, this) );
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_createButton_clicked()
{
    QString width, height;
    if((width = ui->widthEdit->text()) != "" && (height = ui->heightEdit->text()) != "" && (path != ""))
    {
        ui->dragFrame->addImage(QSize(width.toInt(),height.toInt()), path);
    }
}

void MainWindow::on_chooseImage_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open Image"), "", tr("Image Files (*.png *.jpg *.bmp)"));
    if (fileName != "")
    {
        path = fileName;
        ui->choosenImagePath->setText(path);
    }
}
