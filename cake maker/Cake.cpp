// Cake.cpp
#include "Cake.h"

Cake::Cake(const std::string& name) : name(name) {}

std::string Cake::getName() const {
    return name;
}
