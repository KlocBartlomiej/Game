#ifndef MYFRAME_H
#define MYFRAME_H

#include <QFrame>

class MyFrame : public QFrame{
    Q_OBJECT
    int x,y;
public:
    MyFrame(int x, int y): x(x), y(y){ this->setMouseTracking(true);}
    int getX(){ return x; }
    int getY(){ return y; }
    void mousePressEvent(QMouseEvent* event){ emit clickedOn(x,y);}
    void mouseMoveEvent(QMouseEvent* event){ emit hoveredOn(x,y);}
 signals:
    void clickedOn(int x, int y);
    void hoveredOn(int x, int y);
};

#endif // MYFRAME_H
