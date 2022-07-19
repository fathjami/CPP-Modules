#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* we = new Zombie[N];

    for (int i = 0; i < N; i++){
        we[i].set_name(name);
        we[i].annouce();
    }
    return (we);
}