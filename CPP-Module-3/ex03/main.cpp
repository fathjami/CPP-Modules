#include "DiamondTrap.hpp"

int main(void){
    DiamondTrap Thor("Thor");
    Thor.highFivesGuys();
    Thor.attack("someone");
    Thor.takeDamage(3);
    Thor.beRepaired(4);
    Thor.whoAmI();

    return 0;
}