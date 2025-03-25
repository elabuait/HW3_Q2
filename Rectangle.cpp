#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle():Polygon() {}
Rectangle::Rectangle(int newWidth, int newHeight):Polygon(newWidth, newHeight) {}
int Rectangle::getArea() const {
    return width * height;
}
void Rectangle::draw() const {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}