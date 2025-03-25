#include <iostream>
#include "Polygon.h"
#include "Triangle.h"
using namespace std;

Triangle::Triangle():Polygon() {}
Triangle::Triangle(int newWidth, int newHeight):Polygon(newWidth, newHeight) {}
int Triangle::getArea() const {
    return (width * height) / 2;
}
void Triangle::draw() const {
    int numOfStars = 1;
    int spaces=(height-1);
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < spaces; ++j) {
            cout << " ";
        }
        for (int j = 0; j < numOfStars; ++j) {
            cout << "*";
        }
        cout << endl;
        numOfStars += 2;
        spaces--;
    }
}