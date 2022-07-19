#include "Zombie.hpp"

int main(void){
    int N = 5;
    Zombie *we = zombieHorde(N, "autismos");
    
    delete [] we;
    return 0;
}