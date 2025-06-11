#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QStackedWidget>

class LoginPage;

class MainWindow : public QMainWindow {
    Q_OBJECT

public :
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QStackedWidget *stackedWidget;
    LoginPage *loginPage;
};

#endif