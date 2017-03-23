//
// Created by moran on 15/03/2017.
//

#ifndef UNTITLED2_RECTANGLE_H
#define UNTITLED2_RECTANGLE_H


#include "point.h"

class Rectangle {
protected:
    Point m_corner;
    int m_w;
    int m_h;
    static int m_rectCount;

public:
    Rectangle(int x, int y, int h, int w);
    Rectangle(Point &p, int h, int w);
    ~Rectangle();
    void Display();
    static int GetRectCount();


};


#endif //UNTITLED2_RECTANGLE_H
