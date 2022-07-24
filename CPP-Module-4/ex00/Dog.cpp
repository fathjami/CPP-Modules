#include "Dog.hpp"

void Dog::makeSound() const{
    std::cout << "Dog: Dogs don't meow..." << std::endl;
}

Dog:: Dog(){
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog:: ~Dog(){
    std::cout << "Dog distructor called" << std::endl;
    this->type = "Dog";
}