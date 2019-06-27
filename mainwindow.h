#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
#include <QPushButton>
#include <QString>

#include <vector>
#include "tinystr.h"
#include "tinyxml.h"
#include "cJSON.h"

#include <string>
#include <stdio.h>

using namespace std;

struct InfoGraph
{
    string type;
    string text_str;
    string father_name;
};


//Q_DECLARE_METATYPE(InfoGraph)



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    //参数结构体


    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void resizeEvent(QResizeEvent *event);

    void addChildren(vector<InfoGraph>& children, cJSON * fatherElem);
    vector<InfoGraph> findNextChildren(vector<InfoGraph>& originNode, string father_name);
    QString Xml2Json(vector<InfoGraph>& vecNode);
    void ReadParaXml(string m_strXmlPath, vector<InfoGraph>& vecNode);

private slots:
    void pushButton_clicked();

private:
    Ui::MainWindow *ui;

    QWebEngineView * mView;

    //QPushButton * pushButton;
};

#endif // MAINWINDOW_H
