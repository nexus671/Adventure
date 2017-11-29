//
// Created by acurr on 11/20/2017.
//

#ifndef FINALPROJECT_ENTITY_H
#define FINALPROJECT_ENTITY_H

#include <string>
#include "../RPGObject.h"
#include "../Enums/RaceName.h"

class Entity : public RPGObject {
protected:
    RaceName raceName;
    std::string sex;

    /************* Constructors *************/

public:
    Entity(std::string name, RaceName raceName, std::string sex, std::string description);

    Entity();

    /************* Getters *************/

    std::string getName();

    /************** Setters *************/

    void setName(std::string name);

    RaceName getRaceName();

    void setRaceName(RaceName raceName);

    std::string getSex();

    void setSex(std::string sex);

    std::string getDescription();

    void setDescription(std::string description);

    std::string toString();
};


#endif //FINALPROJECT_ENTITY_H
