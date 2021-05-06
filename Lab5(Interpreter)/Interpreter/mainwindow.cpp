#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    textReplacing = new TextReplacing();
    textReplacing->replacings.append(new CloseRoundBracketReplacing());
    textReplacing->replacings.append(new OpenRoundBracketReplacing());
    textReplacing->replacings.append(new TabReplacing());
    textReplacing->replacings.append(new DoubleSpaceReplacing());
    textReplacing->replacings.append(new NewLinesReplacing());
    textReplacing->replacings.append(new QuotationMarksReplacing());
    textReplacing->replacings.append(new HyphenReplacing());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_interpretButton_clicked()
{
    QString text = ui->inputText->toPlainText();
    ui->lcdNumber->display(textReplacing->interpret(&text));
    ui->outputText->setText(text);
}
