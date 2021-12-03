#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    void digit_pressed();

    void on_pushButton_clear_pressed();

    void on_pushButton_equal_pressed();

    void binary_operation();

    void add_brackets();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
