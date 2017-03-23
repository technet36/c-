//
// Created by moran on 08/03/2017.
//

#ifndef UNTITLED2_POINT_H
#define UNTITLED2_POINT_H

#include <cstdio>

class Point {
protected:
    int m_x;
    int m_y;
    static int m_pointCount;
public:
    Point(int x, int y);
    Point(int x);
    ~Point();
    void Display();
    static int GetPointCount();
    void Move(int dX, int dY) ; // déplace le point des valeurs indiquées
    int XEgalY() ;     // retourne 1 si les coordonnées x et y du point sont identiques, 0 sinon
    int GetX() ;         // retourne la valeur de la coordonnée x du point
    int GetY() ;         // retourne la valeur de la coordonnée y du point
    void SetX(int x) ;      // change la valeur de la coordonnée x
    void SetY(int y) ;
    float Distance(Point *B);


    float MaxDistance(Point **tabPoints);
};


#endif //UNTITLED2_POINT_H
