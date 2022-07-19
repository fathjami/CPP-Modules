#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie{
    private:
        std::string name;
    
    public:
        Zombie(void);
        ~Zombie(void);
        void set_name(std::string z_name);
        void annouce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif