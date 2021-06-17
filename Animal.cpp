#include "Animal.h"
#include <iostream>
#include <cmath>
using namespace std;

Animal::Animal() {
    x=0;
    y=0;
}

void Animal::fall() {
    cout << "The animal fell" << endl;
}

void Animal::setPosition(double x, double y) {
    this->x=x;
    this->y=y;
}

void Animal::move(const double &x, const double &y) {
    if ( this->x <= 800 && this->x >= 0 && this->y <= 700 && this->y >= 0 ) {
        this->x = this->x+x;
        this->y = this->y+y;
    }
    else{
        this->x = this->x-x;
        this->y = this->y-y;
    }
}

double Animal::getX() const {
    return x;
}

double Animal::getY() const {
    return y;
}

bool Animal::isInPit(double x, double y, double r) const {
    return sqrt(pow((this->x-x),2) + pow((this->y-y),2)) < r;
}