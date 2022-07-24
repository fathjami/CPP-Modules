#include "ScavTrap.hpp"

ScavTrap:: ScavTrap(std::string name){
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap:: ~ScavTrap(void){
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate(void){
    std::cout << this->getName() << ": is in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (this->_energyPoint){
        std::cout << this->_name << " ScavTrap attacks " << target << std::endl;
        this->_energyPoint-- ;
    }
    else
        std::cout << "No energy :(" << std::endl;
}