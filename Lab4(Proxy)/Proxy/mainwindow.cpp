#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "image.h"
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setAcceptDrops(true);
    Image* img = new Image(ui->centralwidget);
}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::dragEnterEvent(QDragEnterEvent *event)
{

}

void MainWindow::dragMoveEvent(QDragMoveEvent *event)
{

}

void MainWindow::dropEvent(QDropEvent *event)
{

}
