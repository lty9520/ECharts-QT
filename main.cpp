#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    //QTextCodec::setCodecForTr( QTextCodec::codecForName("utf8") );
    //QTextCodec::setCodecForCStrings( QTextCodec::codecForName("utf8") );
    QTextCodec::setCodecForLocale( QTextCodec::codecForName("utf8") );


    //Q_INIT_RESOURCE(main);

    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();
    //w.show();

    return a.exec();
}
