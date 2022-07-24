#include "Animal.hpp"

Animal::Animal(void){
    std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(const Animal& a){
    std::cout << "copy structor called" << std::endl;
    *this = a;
}

Animal& Animal::operator=(const Animal& a){
    this->type = a.type;
    std::cout << "copy assignment operator called" << std::endl;
    return *this;
}

Animal::~Animal(){
    std::cout << "Destructor called" << std::endl;
}

void Animal::makeSound() const{
}

std::string Animal::getType() const{
    return this->type;
}