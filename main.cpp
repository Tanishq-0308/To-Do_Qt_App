#include <QApplication>
#include "MainWindow.hpp"
#include <QFile>
#include <QDebug>

QString loadMergedStyleSheets(const QStringList &files){
    QString merged;
    for(const QString &file : files){
        QFile f(file);
        if(f.open(QFile::ReadOnly)) {
            merged += f.readAll() + "\n";
            f.close();
        }else {
            qWarning() << "Could not open QSS file: " << file;
        }
    }
    return merged;
}

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    QStringList qssFiles ={
        ":assets/styles/login.qss",
    };
    app.setStyleSheet(loadMergedStyleSheets(qssFiles));

    MainWindow window;
    window.showFullScreen();

    return app.exec();
}