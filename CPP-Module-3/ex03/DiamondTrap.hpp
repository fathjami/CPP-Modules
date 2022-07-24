#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
    std::string _name;
public:
    DiamondTrap(std::string name);
    ~DiamondTrap();
    using ScavTrap::attack;
    void whoAmI();
};


#endif