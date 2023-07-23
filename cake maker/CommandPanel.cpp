// CommandPanel.cpp
#include "CommandPanel.h"
#include <iostream>

CommandPanel::CommandPanel(CommandTaker& taker, const CakeMenu& menu)
    : taker(taker), menu(menu) {}

void CommandPanel::showMenu() const {
    std::cout << "Menu:" << std::endl;
    int numOfRecipes = menu.getNumOfRecipes();
    for (int i = 0; i < numOfRecipes; ++i) {
        std::cout << i + 1 << ". " << menu.getCakeNameByIndex(i) << std::endl;
    }

    int numCakeTypes;
    std::cout << "Enter the number of cake types you want to order: ";
    std::cin >> numCakeTypes;

    for (int i = 0; i < numCakeTypes; ++i) {
        std::cout << "Enter the index of the cake you want to order (1-" << numOfRecipes << "): ";
        int cakeIndex;
        std::cin >> cakeIndex;
        if (cakeIndex >= 1 && cakeIndex <= numOfRecipes) {
            std::cout << "Enter the quantity of " << menu.getCakeNameByIndex(cakeIndex - 1) << " you want to order: ";
            int quantity;
            std::cin >> quantity;
            if (quantity > 0) {
                taker.takeCommand(cakeIndex - 1, quantity);
            }
        }
        else {
            std::cout << "Invalid cake index. Please try again." << std::endl;
            --i; 
        }
    }

    std::cout << "Thank you for your order!" << std::endl;
}
