#ifndef CHANNELQT2JS_H
#define CHANNELQT2JS_H

#include<QObject>

class channel : QObject
{

    Q_OBJECT

public:
    static channel * instance();

public slots :
    void showMessageBox();

private :
    channel();
};

#endif // CHANNELQT2JS_H


