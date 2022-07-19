#include "Zombie.hpp"

Zombie:: Zombie(std::string z_name){
    name = z_name;
    std::cout << name << ": created" << std:: endl;
}

void Zombie:: annouce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie:: ~Zombie(void){
    std::cout << name << ": destroyed" << std:: endl;
}