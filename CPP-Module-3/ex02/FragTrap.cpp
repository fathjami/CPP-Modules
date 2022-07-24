#include "FragTrap.hpp"

FragTrap:: FragTrap(std::string name):ClapTrap(name){
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap:: ~FragTrap(void){
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << this->getName() << ": Guys ! High Five :)" << std::endl;
}