//
// Created by acurr on 11/29/2017.
//

#include "Area.h"

Area::Area(int radius, bool friendlyFire, Shape shape, int centerX, int centerY) {
    this->radius = radius;
    this->friendlyFire = friendlyFire;
    this->shape = shape;
    this->centerX = centerX;
    this->centerY = centerY;
    setArea(radius);
}

int Area::getRadius() {
    return radius;
}

void Area::setRadius(int radius) {
    this->radius = radius;
}

bool Area::isFriendlyFire() {
    return friendlyFire;
}

void Area::setFriendlyFire(bool friendlyFire) {
    this->friendlyFire = friendlyFire;
}

Shape Area::getShape() {
    return shape;
}

void Area::setShape(Shape shape) {
    this->shape = shape;
}

int Area::getArea() {
    return area;
}

void Area::setArea(int r) {
    if (shape.toString() == Shape::SQUARE.toString())
        area = r * r;
    else if (shape.toString() == Shape::CIRCLE.toString())
        area = (int) (3.14 * r * r);
}

int Area::getCenterX() {
    return centerX;
}

void Area::setCenterX(int centerX) {
    this->centerX = centerX;
}

int Area::getCenterY() {
    return centerY;
}

void Area::setCenterY(int centerY) {
    this->centerY = centerY;
}
