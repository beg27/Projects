// CommandTaker.cpp
#include "CommandTaker.h"
#include <iostream>

CommandTaker::CommandTaker(CarouselOfCakes& carousel, CakeMaker& maker, const CakeMenu& menu)
    : carousel(carousel), maker(maker), menu(menu) {}

void CommandTaker::takeCommand(int recipeIndex, int quantity) {
    std::string cakeName = menu.getCakeNameByIndex(recipeIndex);
    std::vector<Cake> availableCakes = carousel.getCakesFromCarousel();
    int numAvailableCakes = 0;
    for (const auto& cake : availableCakes) {
        if (cake.getName() == cakeName) {
            ++numAvailableCakes;
        }
    }

    if (numAvailableCakes >= quantity) {
        std::cout << "Taking " << quantity << " " << cakeName << " from CarouselOfCakes..." << std::endl;
        
    }
    else {
        std::cout << "No " << cakeName << " available in CarouselOfCakes. Requesting from CakeMaker..." << std::endl;
        for (int i = 0; i < quantity; ++i) {
            Cake newCake = maker.makeCake(menu, recipeIndex);
            carousel.addCake(newCake);
        }
        std::cout << "Added " << quantity << " " << cakeName << " to CarouselOfCakes." << std::endl;
    }
}

void CommandTaker::displayAvailableCakes() const {
    carousel.displayAvailableCakes();
}
