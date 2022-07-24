#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap{
    protected:
        std::string _name;
        int _hitPoint;
        int _energyPoint;
        int _attackDamage;
    public:
        ClapTrap(const std::string name);
        ~ClapTrap(void);
        ClapTrap(const ClapTrap& c);
        ClapTrap& operator=(const ClapTrap& c);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string     getName() const;
        unsigned int    getHitPoints() const;
        unsigned int    getEnergyPoints() const;
        unsigned int    getAttackDamage() const;

};
#endif