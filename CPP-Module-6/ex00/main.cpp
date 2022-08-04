#include "convert.hpp"

int main(int ac, char *av[])
{
    if (ac == 2){
        if (IsPseudoFloat(av[1])){}
        else if (IsPseudoDouble(av[1])){}
        else if(IsChar(av[1]))
                castChar(av[1][0]);
        else if (IsInt(av[1]))
                try{
                   castInt(av[1]);
                }
                catch(std::exception& e){
                    impoPrint();
                }      
        else if (IsFloat(av[1]))
             try{
                 castFloat(av[1]);
             }
             catch(std::exception&  e){
                 impoPrint();
             }
        else if (IsDouble(av[1]))
            try{
                 castDouble(av[1]);
             }
             catch(std::exception&  e){
                 impoPrint();
             }
        else
            std::cout << "Unknown type :(" << std::endl;
    }

    return 0;
}