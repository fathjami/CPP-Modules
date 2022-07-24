#include "ClapTrap.hpp"

ClapTrap:: ClapTrap(const std::string name):_name(name), _hitPoint(100), _energyPoint(50), _attackDamage(20){
    std::cout << "Default constructor called!" << std::endl;
}

ClapTrap:: ~ClapTrap(void){
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if (this->_energyPoint){
        std::cout << this->_name << " attacks " << target << std::endl;
        this->_energyPoint-- ;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->_energyPoint){
        std::cout << this->_name << " has been repaired."  << std::endl;
        this->_energyPoint-- ;
        this->_hitPoint += amount;
    }
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (this->_hitPoint)
    {
        std::cout << this->_name << " has been attacked" << std::endl;
        this->_hitPoint-- ;
    }
}

std::string     ClapTrap::getName() const {
    return this->_name;
}

unsigned int    ClapTrap::getHitPoints() const {
    return this->_hitPoint;
}

unsigned int    ClapTrap::getEnergyPoints() const {
    return this->_energyPoint;
}

unsigned int    ClapTrap::getAttackDamage() const {
    return this->_attackDamage;
}

ClapTrap:: ClapTrap(const ClapTrap& c){
    *this = c;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c){
    this->_attackDamage = c._attackDamage;
    this->_energyPoint = c._energyPoint;
    this->_hitPoint = c._hitPoint;
    this->_name = c._name;
    return (*this);
}
/*

    1. When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
    2. When ClapTrap repairs itself, it gets <amount> hit points back.
    3. Attacking and repairing const 1 energy piont each.
    4. ClapTrap can't attack or repair if its energy points are less than or equal to 0.

*/