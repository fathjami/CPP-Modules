#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>

class HumanA
{
public:
    private:
        Weapon& weapon;
        std::string name;
    public:
        HumanA(std::string n, Weapon& w);
        ~HumanA();
        void attack();
};

 
#endif