#include "point.h"
#include "Rectangle.h"

int main() {
    //test point

     /**
     * Point P1(10, 10);
    P1.Display();
    int n ;
    n=Point::GetPointCount();
    printf("Nombre de points : %d\n",n);
    Point* tabPoint[10];
    for (int i = 0; i < 10; ++i) {
        tabPoint[i] = new Point(i);
        tabPoint[i]->Display();
    }

    n=Point::GetPointCount();
    printf("Nombre de points : %d\n",n);
    for (int i = 0; i < 10; ++i) {
        delete(tabPoint[i]);
    }

    n=Point::GetPointCount();
    printf("Nombre de points : %d\n",n);

    float dist = tabPoint[3]->Distance(tabPoint[6]);
    printf("la distance entre (%d, %d) et (%d, %d) est : %.2f",tabPoint[3]->GetX(),tabPoint[3]->GetY(),tabPoint[6]->GetX(),tabPoint[6]->GetY(),dist);

     */

    //test rectangle

    Rectangle r1(0,0,20,10);
    r1.Display();
    printf("\nNombre de rectangle : %d\n",Rectangle::GetRectCount() );
    Point p1(1,2);
    Rectangle r2(p1,40,30);
    r2.Display();
    printf("\nNombre de rectangle : %d\n",Rectangle::GetRectCount() );

    Rectangle *r3 = new Rectangle(100,200,400,300);
    printf("\nNombre de rectangle : %d\n",Rectangle::GetRectCount() );
    delete r3;
    printf("\nNombre de rectangle : %d\n",Rectangle::GetRectCount() );


    return 0;
}