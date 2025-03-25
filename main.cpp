/*************************************************************************
** Author : Abueita Elias
** Program : hw3, q2
** Date Created : March 25, 2025
** Date Last Modified : March 25, 2025
** Usage : No command line arguments
**
** Problem:
This program involves practicing using virtual functions to output rectangles and triangles with astericks.
*************************************************************************/

#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;
int main() {
    //rectangle examples
    Rectangle r1(5, 9);
    cout<<"Rectangle area: " << r1.getArea() << endl<<"drawing: " << endl;
    r1.draw();
    r1.setWidth(7);
    r1.setHeight(4);
    cout << "Rectangle area: "<< r1.getArea() << endl << "drawing: " << endl;;
    r1.draw();
    //triangle examples
    Triangle t1(10, 5);
    cout << "Triangle area: " << t1.getArea() << endl<< "drawing: " << endl;
    t1.draw();
    t1.setWidth(12);
    t1.setHeight(6);
    cout << "Triangle area: " <<t1.getArea() <<endl<< "drawing: " << endl;
    t1.draw();
    //Q1: Results in this error: variable type 'Polygon' is an abstract class. this is due to its pure virtual functions
    //Q2: still it is abstract because there is no function definition
}
