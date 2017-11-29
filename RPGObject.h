//
// Created by acurr on 11/18/2017.
//

#ifndef FINALPROJECT_RPGOBJECT_H
#define FINALPROJECT_RPGOBJECT_H

#include <string>

/**
 * Class Description: Superclass of all core classes.
 */
class RPGObject {
protected:
    std::string name;
    std::string description;
public:
    virtual std::string getName();

    virtual void setName(std::string nname);

    virtual std::string getDescription();

    virtual void setDescription(std::string ndescription);
};


#endif //FINALPROJECT_RPGOBJECT_H
