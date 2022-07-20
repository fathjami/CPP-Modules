#include "fstream.hpp"

int main(int ac, char *av[]){


    if (av[1] && av[2] && av[3]){

        std::string name = av[1];
        std::ifstream ifs(name);
        std::string cont;
        std::getline(ifs, cont, '\0');
        ifs.close();
        cont = replace(cont, av[2], av[3]);
        std::ofstream ofs(name + ".replace");
        ofs << cont;
        ofs.close();
    }
    return 0;
}