#include "DomesticAnimal.h"
#include <iostream>

DomesticAnimal::DomesticAnimal() : Animal(){}

void DomesticAnimal::fall() {
    std::cout << " **** Domestic Animal fell ****" << std::endl;
}
