#include "WildAnimal.h"
#include <iostream>

WildAnimal::WildAnimal(): Animal() {}

void WildAnimal::fall() {
    std::cout << " #### Wild Animal fell ####" << std::endl;
}