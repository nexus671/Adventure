//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_SHAPE_H
#define FINALPROJECT_SHAPE_H

#include <string>

class Shape {

private:
    std::string lowercase;


public:
    std::string toString() const;

    static const Shape SQUARE;
    static const Shape CIRCLE;

/**
 * @param lowercase Sets the lowercase field to the lowercase version of
 *                  the object name.
 */
    Shape(std::string lowercase);
};


#endif //FINALPROJECT_SHAPE_H
