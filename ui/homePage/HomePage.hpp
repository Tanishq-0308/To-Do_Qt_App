#ifndef HOMEPAGE_HPP
#define HOMEPAGE_HPP

#include <QWidget>

class HomePage: public QWidget {
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = nullptr);

private:
    // void setupMainLayout();
};

#endif