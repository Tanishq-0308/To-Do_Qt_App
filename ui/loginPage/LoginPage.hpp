#ifndef LOGINPAGE_HPP
#define LOGINPAGE_HPP

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class LoginPage : public QWidget {
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);

signals:
    void loginSuccessful();

private:
     QLineEdit* password;
     QLineEdit* username;

     void handleLogin();

};

#endif