#include "Harl.hpp"

void Harl::complain( std::string level ){

    std::string f[4] = {"DEBUG",
                        "INFO",
                        "WARNING",
                        "ERROR"};
    int i = -1;
    while(++i < 4 && f[i].compare(level));
    switch(i){
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

void Harl::debug(void){
    std::cout<< "[ DEBUG ]\n" 
             << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
    std::cout<< "[ INFO ]\n" 
             << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
    std::cout<< "[ WARNING ]\n" 
             << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
    std::cout<< "[ ERROR ]\n"
             << "This is unacceptable! I want to speak to the manager now." << std::endl;
}