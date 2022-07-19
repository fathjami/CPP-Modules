#include <iostream>

int main(int ac, char *av[])
{
    if (ac > 1)
    {
        for (int j = 1; av[j]; j++)
        {
            for(size_t i = 0; i < strlen(av[j]); i++)
            {
                char c = toupper(av[j][i]);
                std:: cout << c; 
            }
            std:: cout << ' ';   
        }
        std:: cout << '\n';
    }
    else
        std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std:: endl;
    return 0;
}
