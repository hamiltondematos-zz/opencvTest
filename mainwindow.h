#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QPushButton>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void test2222();

private:
    Ui::MainWindow *ui;
    //QPushButton *m_button;

};

#endif // MAINWINDOW_H
