// CarouselOfCakes.h
#ifndef CAROUSELOFCAKES_H
#define CAROUSELOFCAKES_H

#include <vector>
#include "Cake.h"

class CarouselOfCakes {
public:
    void addCake(const Cake& cake);
    void displayAvailableCakes() const;
    bool checkCarouselOfCakes() const;
    std::vector<Cake> getCakesFromCarousel() const;

private:
    std::vector<Cake> cakes;
};

#endif // CAROUSELOFCAKES_H
