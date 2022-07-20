#include "Harl.hpp"

int main(int ac, char *av[]){
    Harl harl;

    if (av[1])
        harl.complain(av[1]);
    return 0;
}