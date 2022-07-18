#include <iostream>

int main(int ac, char *av[])
{
    if (ac > 1)
    {
        for(size_t i = 0; i < strlen(av[1]); i++)
        {
            char c = toupper(av[1][i]);
            std:: cout << c; 
        }
        std:: cout << '\n';
    }
    else
        std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
    return 0;
}
