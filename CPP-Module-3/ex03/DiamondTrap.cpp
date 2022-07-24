#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name):FragTrap(name) , ScavTrap(name)
{
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    FragTrap::_attackDamage = 30;
    this->FragTrap::_hitPoint = 100;
    ScavTrap::_energyPoint = 50;
    std::cout << "Diamond constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond Destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "ClapTrap name: " << this->ClapTrap::_name
              << "\n"
              << "Diamond name: " << this->_name
              << std::endl;
}