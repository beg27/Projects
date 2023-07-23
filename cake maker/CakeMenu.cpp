// CakeMenu.cpp
#include "CakeMenu.h"

CakeMenu::CakeMenu() {
    
    recipes.push_back("Chocolate Cake");
    recipes.push_back("Fruit Cake");
    recipes.push_back("Cheesecake");
    recipes.push_back("Banana Cake"); 
    recipes.push_back("Carrot Cake"); 
}

int CakeMenu::getNumOfRecipes() const {
    return recipes.size();
}

std::string CakeMenu::getCakeNameByIndex(int index) const {
    if (index >= 0 && index < recipes.size()) {
        return recipes[index];
    }
    return "";
}
