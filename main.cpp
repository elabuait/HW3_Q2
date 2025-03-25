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
}
