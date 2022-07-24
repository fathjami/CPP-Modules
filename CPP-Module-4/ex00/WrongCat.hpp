#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

#include <iostream>

class WrongCat: public WrongAnimal{
    public:
    WrongCat(){
    std::cout << "WrongCat constructor called" << std::endl;
}

    ~WrongCat(){
    std::cout << "WrongCat distructor called" << std::endl;
}

    void makeSound()const
{
    std::cout << "I am a wrong Cat" << std::endl;
    }
};
#endif