#include "Pet.h"
#include <iostream>

Pet::Pet() : Animal(){}

void Pet::fall() {
    std::cout << " **** Pet fell ****" << std::endl;
}