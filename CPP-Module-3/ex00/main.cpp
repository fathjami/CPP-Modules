#include "ClapTrap.hpp"

int main(void){
    ClapTrap Thor("Thor");
    Thor.attack("someone");
    Thor.takeDamage(10);
    Thor.beRepaired(4);
    return 0;
}