// CakeRecipe.cpp
#include "CakeRecipe.h"

CakeRecipe::CakeRecipe() {}

void CakeRecipe::addRecipe(const std::string& recipeName) {
    recipes.push_back(recipeName);
}

int CakeRecipe::getRecipeIndex(const std::string& recipeName) const {
    for (size_t i = 0; i < recipes.size(); ++i) {
        if (recipes[i] == recipeName) {
            return static_cast<int>(i);
        }
    }
    
    return -1;
}
