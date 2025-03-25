#include "Polygon.h"
#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle : public Polygon {
public:
    Rectangle();
    Rectangle(int newWidth, int newHeight);
    int getArea() const override;
    void draw() const override;
};
#endif //RECTANGLE_H
