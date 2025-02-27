// Rectangle.h
// Week 5 Task 2
// Name: Jackie Arteaga
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;  //rectangle length
    double width;   //rectangle width

public:
    Rectangle() : length(0.0), width(0.0) {}

    double getWidth() const;

    double getLength() const;

    void setWidth(double w);

    void setLength(double l);

    double getArea() const;
};

#endif
