#include "Cat.hpp"

void Cat::makeSound() const{
    std::cout << "Cat: Meow Meoow..." << std::endl;
}

Cat:: Cat(){
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat:: ~Cat(){
    std::cout << "Cat distructor called" << std::endl;
}