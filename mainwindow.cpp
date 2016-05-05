#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"

using namespace std;

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

void MainWindow::test2222()
{
    //                // change the text
    //    m_button->setText("Example");
    //    // resize button
    //    m_button->resize(100,100);
    cout << "ashdakjsdhakjsdasda";
}
