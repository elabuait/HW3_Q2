#include "Rectangle.h"
#include "Polygon.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle():Polygon() {}
Rectangle::Rectangle(int newWidth, int newHeight):Polygon(width, height) {}
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