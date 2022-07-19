#include "Zombie.hpp"

void randomChump( std::string name ){
    Zombie you = Zombie(name);
    you.annouce();
}