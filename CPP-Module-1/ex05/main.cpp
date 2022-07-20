#include "Harl.hpp"

int main()
{
    std::string levl;
    Harl harl;

    std::cout << "Program lunched (type EXIT  to quit):" << std::endl;
    do
    {
        std::cin >> levl;
        harl.complain(levl);
    } while (levl.compare("EXIT"));
    
    return 0;
}