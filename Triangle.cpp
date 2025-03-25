#include <iostream>
using namespace std;
#include "Triangle.h"

Triangle::Triangle():Polygon() {}
Triangle::Triangle(int newWidth, int newHeight):Polygon(width, height) {}
int Triangle::getArea() const {
    return (width * height) / 2;
}
void Triangle::draw() const {
    int maxStars = width;
    for (int i = 1; i <= height; ++i) {
        for (int j = 0; j < 2 * i - 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}