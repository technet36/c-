//
// Created by moran on 15/03/2017.
//

#include "Rectangle.h"
#include <cstdio>

//static
int Rectangle::m_rectCount = 0;

Rectangle::Rectangle(int x, int y, int h, int w) : m_corner(x,y) {
    m_h = h;
    m_w = w;
    m_rectCount++;
    printf("Je suis dans la fonction %s et je viens de construire %d ieme rectangle : point (%d,%d) avec une largeur de %d et une longueur de %d \n",__func__,m_rectCount,x,y,w,h);
}

Rectangle::~Rectangle() {
    printf("Je suis dans la fonction %s et je viens de detruire le %d ieme rectangle : point(%d,%d) avec une largeur de %d et une longueur de %d \n",__func__,m_rectCount,m_corner.GetX(),m_corner.GetY(),m_w,m_h);
    m_rectCount--;
}

void Rectangle::Display() {
    printf("\nRectangle de coordonnee :");
    m_corner.Display();
    printf(" avec une longueur de %d et une largeur de %d\n",m_w,m_h);
}

int Rectangle::GetRectCount() {
    return m_rectCount;
}

Rectangle::Rectangle(Point &p, int h, int w) : m_corner(p) {
    m_w = w;
    m_h = h;
    m_rectCount++;

}
