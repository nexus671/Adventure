//
// Created by acurr on 11/29/2017.
//

#include "Shape.h"

Shape::Shape(std::string lowercase) {
    this->lowercase = lowercase;
}

std::string Shape::toString() const {
    return lowercase;
}

const Shape Shape::SQUARE = Shape("square");
const Shape Shape::CIRCLE = Shape("circle");