//
// Created by moran on 08/03/2017.
//

#include "point.h"
#include <iostream>
#include <cmath>


//static
int Point::m_pointCount=0;

Point::Point(int x, int y){
    m_x = x;
    m_y = y;
    m_pointCount++;
}

Point::~Point() {
    m_pointCount--;

}

Point::Point(int l) {
    m_y = l;
    m_x = l;
    m_pointCount++;
    printf("la fonction courrante est %s\n",__func__);
}

void Point::Display() {
    std::cout<<"x: "<<m_x<<"\ty: "<<m_y<<std::endl;
}

int Point::GetPointCount(){
    return m_pointCount;
}

void Point::Move(int dX, int dY) {
    m_x+=dX;
    m_y+=dY;
}

int Point::XEgalY() {
    return (m_y==m_x)?1:0;
}

int Point::GetX() {
    return m_x;
}

int Point::GetY() {
    return m_y;
}

void Point::SetX(int x) {
    m_x = x;
}
void Point::SetY(int y) {
    m_y = y;
}


float Point::Distance(Point *B) {
    int dX = B->GetX()-m_x;
    int dY = B->GetY()-m_y;
    return (float)sqrt(dX*dX+dY*dY);
}

float Point::MaxDistance(Point** tabPoints){
}

