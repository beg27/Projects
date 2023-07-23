// CakeMaker.h
#ifndef CAKEMAKER_H
#define CAKEMAKER_H

#include "Cake.h"
#include "CakeMenu.h"

class CakeMaker {
public:
    Cake makeCake(const CakeMenu& menu, int recipeIndex) const;
};

#endif // CAKEMAKER_H
