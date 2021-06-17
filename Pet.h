#ifndef PET_H
#define PET_H
#include "Animal.h"

class Pet : public Animal
{
public:
    Pet();
    virtual void fall() override final;
};

#endif
