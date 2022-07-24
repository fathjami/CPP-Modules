#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap{
    public:
        ScavTrap(std::string name);
        ~ScavTrap(void);
        void guardGate();
        void attack(const std::string& target);
};
#endif