// RectangleDefinitions.cpp
// Week 5 Task 2
// Name: Jackie Arteaga
#include "Rectangle.h"

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setLength(double l) {
    length = l;
}

double Rectangle::getArea() const {
    return length * width;
}
