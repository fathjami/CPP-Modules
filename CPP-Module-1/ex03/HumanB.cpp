#include "HumanB.hpp"

void HumanB::attack()
{
        if (weapon != NULL)
                std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::HumanB(std::string n): name(n){
        weapon = NULL;
}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon& w){
        weapon = &w;
}