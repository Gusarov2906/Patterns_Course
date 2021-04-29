#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "image.h"
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->dragFrame->addImage(QSize(128,128),"aaa");
    ui->dragFrame->getImage(0)->move(200,0);
    ui->dragFrame->addImage(QSize(64,64),"bbb");
    ui->dragFrame->getImage(0)->move(290,0);
    ui->dragFrame->getImage(0)->draw(0,0);
}


MainWindow::~MainWindow()
{
    delete ui;
}
