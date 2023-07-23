// CakeMaker.cpp
#include "CakeMaker.h"
#include "CakeMenu.h" 
#include <iostream> 
#include <chrono>
#include <thread>

Cake CakeMaker::makeCake(const CakeMenu& menu, int recipeIndex) const {
    std::string cakeName = menu.getCakeNameByIndex(recipeIndex);
    std::cout << "Making " << cakeName << "..." << std::endl;
    // Simulate the cake creation delay (5 seconds)
    std::this_thread::sleep_for(std::chrono::seconds(5));
    return Cake(cakeName);
}
