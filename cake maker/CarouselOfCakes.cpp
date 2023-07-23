// CarouselOfCakes.cpp
#include "CarouselOfCakes.h"
#include <iostream>
#include <chrono>
#include <thread>

void CarouselOfCakes::addCake(const Cake& cake) {
    cakes.push_back(cake);
}

void CarouselOfCakes::displayAvailableCakes() const {
    std::cout << "Available Cakes:" << std::endl;
    for (const auto& cake : cakes) {
        std::cout << "- " << cake.getName() << std::endl;
    }
}

bool CarouselOfCakes::checkCarouselOfCakes() const {
    return !cakes.empty();
}

std::vector<Cake> CarouselOfCakes::getCakesFromCarousel() const {
    return cakes;
}
