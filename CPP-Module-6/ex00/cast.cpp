#include "convert.hpp"

void castInt(char str[]){
    int res = std::stoi(str);

    std::cout << "int: " 
              << res << std::endl;
              
    intToChar(res);

    std::cout << "float: "
              << static_cast <float> (res) 
              << ".0f" << std::endl;
    std::cout << "double: "
              << static_cast <double> (res) 
              << ".0" << std::endl;
}

void intToChar(int res){
    if (res < 0 || res > 127)
        std::cout << "char: "
                  << "impossible"
                  << std::endl;

    else if (std::isprint(static_cast <char> (res)))
        std::cout << "char: "
                  << static_cast <char> (res) << std::endl;

    else
        std::cout << "char: "
                  << "Non displayable"
                  << std::endl;
}

void castChar(char c){
    std::cout << "int: "
              << static_cast <int> (c)
              << std::endl;
    std::cout << "char: "
              << c
              << std::endl;
    std::cout << "float: "
              << static_cast <float> (c)
              << ".0f"
              << std::endl;
    std::cout << "double: "
              << static_cast <double> (c)
              << ".0"
              << std::endl;
}

void castFloat(char str[]){
    float res = std::stof(str);
    if (!(res - roundf(res)))
        return (castInt(str));
    std::cout << "int: "
              << static_cast <int> (res)
              << std::endl;
    
    intToChar(res);

    std::cout << "float: "
              << static_cast <float> (res)
              << "f"
              << std::endl;

    std::cout << "double: "
              << static_cast <double> (res)
              << std::endl;
}

void castDouble(char str[]){
    double res = std::stod(str);
    if (!(res - roundf(res)))
        return castInt(str);
    std::cout << "int: "
              << static_cast <int> (res)
              << std::endl;
    
    intToChar(static_cast <int> (res));

    std::cout << "float: "
              << static_cast <float> (res)
              << std::endl;

    std::cout << "double: "
              << static_cast <double> (res)
              << std::endl;
}

void impoPrint()
{
    std::cout << "int: "
              << "impossible"
              << std::endl;
    
    std::cout << "char: "
              << "impossible"
              << std::endl;

    std::cout << "float: "
              << "impossible"
              << std::endl;

    std::cout << "double: "
              << "impossible"
              << std::endl;
}