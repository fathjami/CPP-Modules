#include "Zombie.hpp"

int main(void){
    Zombie * new_z = newZombie("me");
    randomChump("you");
    new_z->annouce();
    delete new_z;
    return 0;
}