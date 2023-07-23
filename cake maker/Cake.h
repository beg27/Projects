// Cake.h
#ifndef CAKE_H
#define CAKE_H

#include <string>

class Cake {
public:
    Cake(const std::string& name);

    std::string getName() const;

private:
    std::string name;
};

#endif // CAKE_H
