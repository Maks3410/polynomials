#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "factorization.cpp"

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


void MainWindow::on_undoPushButton_clicked()
{
    ui->degreesLineEdit->setText("");
    ui->answerTextBrowser->setText("");
}


void MainWindow::on_solvePushButton_clicked()
{
    QString ans;
    string req = ui->degreesLineEdit->text().toStdString();
    ans = QString::fromStdString(get_str_answer(req));
    ui->answerTextBrowser->setText(ans);
}

