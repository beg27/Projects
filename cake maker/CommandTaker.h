// CommandTaker.h
#ifndef COMMANDTAKER_H
#define COMMANDTAKER_H

#include "CarouselOfCakes.h"
#include "CakeMaker.h"
#include "CakeMenu.h"

class CommandTaker {
public:
    CommandTaker(CarouselOfCakes& carousel, CakeMaker& maker, const CakeMenu& menu);

    void takeCommand(int recipeIndex, int quantity = 1);
    void displayAvailableCakes() const;

private:
    CarouselOfCakes& carousel;
    CakeMaker& maker;
    const CakeMenu& menu;
};

#endif // COMMANDTAKER_H
