// CakeMenu.h
#ifndef CAKEMENU_H
#define CAKEMENU_H

#include <string>
#include <vector>

class CakeMenu {
public:
    CakeMenu();

    int getNumOfRecipes() const;
    std::string getCakeNameByIndex(int index) const;

private:
    std::vector<std::string> recipes;
};

#endif // CAKEMENU_H
