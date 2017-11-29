#include <iostream>
#include "RPGObject.h"

int main() {
    RPGObject n;
    n.setDescription("Dirt");

    std::cout << n.getDescription() << std::endl;
    return 0;
}