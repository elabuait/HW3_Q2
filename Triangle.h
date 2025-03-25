//
// Created by Elias  Abueita on 3/25/25.
//
#include "Polygon.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H
class Triangle : public Polygon {
public:
    Triangle();
    Triangle(int newWidth, int newHeight);
    int getArea() const override;
    void draw() const override;
};

#endif //TRIANGLE_H
