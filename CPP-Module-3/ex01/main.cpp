#include "ScavTrap.hpp"

int main(void){
    ScavTrap Thor("Thor");
    Thor.attack("someone");
    Thor.takeDamage(5);
    Thor.beRepaired(4);
    Thor.guardGate();
    return 0;
}