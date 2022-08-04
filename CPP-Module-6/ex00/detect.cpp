#include "convert.hpp"

bool IsInt(char str[]){
    for(int i=(str[0] == '-'); i<std::strlen(str) ; i++){
        if(!std::isdigit(str[i]))
            return false;
    }
    return true;
}

bool IsChar(char str[]){
        if (std::strlen(str) > 1 || std::isdigit(str[0]))
            return false;
    return true;
}

bool IsFloat(char str[]){
    int res = 0;

    for(int i=(str[0] == '-'); i<std::strlen(str) ; i++){
        if (str[i] == '.' && std::isdigit(str[i+1])){
            i++;
            res++;
        }
        else if (str[i] == 'f' && str[i+1] == '\0')
        {
            i++;
            res++;
        }
        else if(!std::isdigit(str[i]))
            return false;
    }
    return (res==2);
}

bool IsDouble(char str[]){
    int res = 0;

    for(int i=(str[0] == '-'); i<std::strlen(str) ; i++){
        if (str[i] == '.' && std::isdigit(str[i+1])){
            i++;
            res++;
        }
        else if(!std::isdigit(str[i]))
            return false;
    }
    return (res==1);
}

bool IsPseudoFloat(char str[]){
    std::string s(str);
    if (s.compare("-inff") && s.compare("+inff") && s.compare("nanf"))
        return false;
    std::cout << "int: "
              << "impossible"
              << std::endl;
    
    std::cout << "char: "
              << "impossible"
              << std::endl;

    std::cout << "float: "
              << s
              << std::endl;

    std::cout << "double: "
              << s.substr(0, s.length() - 1)
              << std::endl;
    return true;
}

bool IsPseudoDouble(char str[]){
    std::string s(str);
    if (s.compare("-inf") && s.compare("+inf") && s.compare("nan"))
        return false;
    std::cout << "int: "
              << "impossible"
              << std::endl;
    
    std::cout << "char: "
              << "impossible"
              << std::endl;

    std::cout << "float: "
              << s + 'f'
              << std::endl;

    std::cout << "double: "
              << s
              << std::endl;
    return true;
}