#include "channelqt2js.h"
#include <QMessageBox>

channel * channel::instance()
{
    static channel s_obj;
    return &s_obj;
}

channel::channel()
{

}

void channel::showMessageBox()
{
    QMessageBox::aboutQt(0, tr("QT"));
}
