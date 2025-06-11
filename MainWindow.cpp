#include "MainWindow.hpp"
#include "ui/loginPage/LoginPage.hpp"

MainWindow::MainWindow(QWidget *parent) 
    : QMainWindow(parent)
{
    stackedWidget = new QStackedWidget(this);
    setCentralWidget(stackedWidget);
    setWindowTitle("Task Management");

    loginPage = new LoginPage();

    stackedWidget->addWidget(loginPage);

}

MainWindow::~MainWindow() {

};