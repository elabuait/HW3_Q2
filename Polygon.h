#ifndef POLYGON_H
#define POLYGON_H

class Polygon
{
    public:
        Polygon();
        Polygon(int newWidth, int newHeight);
        void setWidth(int newWidth);
        void setHeight(int newHeight);
        int getWidth() const;
        int getHeight() const;
        virtual int getArea() const;
        virtual void draw() const;
    protected:
        int width = 0;
        int height = 0;

};


#endif // POLYGON_H
