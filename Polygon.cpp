#include "Polygon.h"
Polygon::Polygon(){}
Polygon::Polygon(int newWidth, int newHeight){
    width = newWidth;
    height = newHeight;
}
int Polygon::getWidth() const {
    return width;
}
int Polygon::getHeight() const {
    return height;
}
void Polygon::setWidth(int newWidth){
    width = newWidth;
}
void Polygon::setHeight(int newHeight){
    height = newHeight;
}


