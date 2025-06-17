#include "LoginPage.hpp"
#include <QHBoxLayout>

LoginPage::LoginPage(QWidget *parent) : QWidget(parent){

    this->setObjectName("loginRoot");
    this->setAttribute(Qt::WA_StyledBackground, true);
    int windowWidth= this->width();
    int windowHeight= this->height();

    auto* mainLayout = new QHBoxLayout(this);
    mainLayout->setContentsMargins(0,0,0,0);

    QLabel *leftImage = new QLabel();
    leftImage->setPixmap(QPixmap(":assets/design.svg").scaled(windowHeight,windowWidth,Qt::KeepAspectRatioByExpanding,Qt::SmoothTransformation));
    // leftImage->setPixmap(QPixmap(":assets/design.png"));
    leftImage->setScaledContents(true);
    leftImage->setObjectName("leftContainer");
    // leftImage->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QVBoxLayout* rightContainer = new QVBoxLayout(this);
    rightContainer->setContentsMargins(30,30,30,30);
    rightContainer->setAlignment(Qt::AlignCenter);
    
    QWidget* rightWidget = new QWidget(this);
    rightWidget->setMinimumSize(450,370);
    rightWidget->setMaximumWidth(450);
    rightWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    rightWidget->setObjectName("container");

    QVBoxLayout* innerLayout = new QVBoxLayout(rightWidget);
    innerLayout->setContentsMargins(50,20,50,20);
    innerLayout->setSpacing(10);
    innerLayout->setAlignment(Qt::AlignCenter);

    QLabel* title = new QLabel("Hello there !");
    title->setObjectName("title");
    title->setAlignment(Qt::AlignCenter);

    QLabel* usernameLabel = new QLabel("Username or Email");
    usernameLabel->setObjectName("label");

    QLineEdit* username = new QLineEdit("");
    username->setPlaceholderText("Enter your mail to login");
    username->setObjectName("inputField");

    QLabel* passwordLabel = new QLabel("Password");
    passwordLabel->setObjectName("label");

    QLineEdit* password = new QLineEdit("");
    password->setPlaceholderText("Enter password");
    password->setEchoMode(QLineEdit::Password);
    password->setObjectName("inputField");

    QPushButton* loginBtn = new QPushButton("Login");
    loginBtn->setObjectName("loginBtn");

    innerLayout->addWidget(title);
    innerLayout->addWidget(usernameLabel);
    innerLayout->addWidget(username);
    innerLayout->addWidget(passwordLabel);
    innerLayout->addWidget(password);
    innerLayout->addWidget(loginBtn);
    rightContainer->addStretch();
    rightContainer->addWidget(rightWidget);
    rightContainer->addStretch();

    

    // mainLayout->addWidget(leftImage,1);
    mainLayout->addLayout(rightContainer,1);
}

void LoginPage::handleLogin() {
    const QString user = username->text();
    const QString pass = password->text();

    if(user == "" && pass == ""){
        emit loginSuccessful();
    }else {
        
    }
}