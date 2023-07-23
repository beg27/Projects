// main.cpp
#include <iostream>
#include "CommandPanel.h"

int main() {
    CakeMenu menu; 
    CarouselOfCakes carousel;
    CakeMaker maker;

    
    carousel.addCake(Cake("Chocolate Cake"));
    carousel.addCake(Cake("Fruit Cake"));
    carousel.addCake(Cake("Cheesecake"));

    CommandTaker taker(carousel, maker, menu); 
    CommandPanel panel(taker, menu); 

    
    carousel.displayAvailableCakes();    
    panel.showMenu();

    return 0;
}
