#include "Zombie.hpp"

Zombie:: Zombie(void){
    std::cout << "A Zombie is created" << std:: endl;
}

void Zombie:: annouce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie:: set_name(std::string name){
    this->name = name; 
}

Zombie:: ~Zombie(void){
    std::cout << name << ": destroyed" << std:: endl;
}