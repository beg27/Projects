// CakeRecipe.h
#ifndef CAKERECIPE_H
#define CAKERECIPE_H

#include <vector>
#include <string>

class CakeRecipe {
public:
    CakeRecipe();

    void addRecipe(const std::string& recipeName);
    int getRecipeIndex(const std::string& recipeName) const;

private:
    std::vector<std::string> recipes;
};

#endif // CAKERECIPE_H
