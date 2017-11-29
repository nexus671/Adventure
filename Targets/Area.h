//
// Created by acurr on 11/29/2017.
//

#ifndef FINALPROJECT_AREA_H
#define FINALPROJECT_AREA_H


#include "Target.h"
#include "../Enums/Shape.h"

class Area : public Target {
    int radius;
    bool friendlyFire;
    Shape shape = Shape("");
    int area;
    int centerX;
    int centerY;

public:
    Area(int radius, bool friendlyFire, Shape shape, int centerX, int centerY);

    int getRadius();

    void setRadius(int radius);

    bool isFriendlyFire();

    void setFriendlyFire(bool friendlyFire);

    Shape getShape();

    void setShape(Shape shape);

    int getArea();

    void setArea(int r);

    int getCenterX();

    void setCenterX(int centerX);

    int getCenterY();

    void setCenterY(int centerY);
};


#endif //FINALPROJECT_AREA_H
