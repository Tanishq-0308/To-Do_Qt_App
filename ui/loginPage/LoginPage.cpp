#include "LoginPage.hpp"
#include <QHBoxLayout>

LoginPage::LoginPage(QWidget *parent) : QWidget(parent){

    this->setObjectName("loginRoot");
    this->setAttribute(Qt::WA_StyledBackground, true);

    auto* mainLayout = new QHBoxLayout(this);
    mainLayout->setContentsMargins(0,0,0,0);

    QWidget *rightBox = new QWidget(this);
    QLabel *leftImage = new QLabel();
    leftImage->setPixmap(QPixmap(":assets/design.png"));
    leftImage->setScaledContents(true);
    leftImage->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    mainLayout->addWidget(leftImage, 1);
}