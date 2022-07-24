#include "FragTrap.hpp"

FragTrap:: FragTrap(std::string name){
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap:: ~FragTrap(void){
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << this->_name << ": Guys ! High Five :)" << std::endl;
}