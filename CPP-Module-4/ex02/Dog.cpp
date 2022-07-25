#include "Dog.hpp"

void Dog::makeSound() const{
    std::cout << "Dog: Dogs don't meow..." << std::endl;
}

Dog:: Dog(){
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->_dogBrain = new Brain();
}

Dog:: ~Dog(){
    std::cout << "Dog distructor called" << std::endl;
    delete this->_dogBrain;
    std::cout << "Dog's brain deleted" << std::endl;
}

Dog:: Dog(const Dog& d){
    std::cout << "Dog's copy constructor called" << std::endl;
    *this = d;
}

Dog& Dog::operator=(const Dog& d){
    std::cout << "Dog's copy assingnment operator called" << std::endl;
    this->_dogBrain = new Brain(*d._dogBrain);
    return *this;
}