#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
    Zombie *me = new Zombie(name);
    return (me);
}