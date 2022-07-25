#include "Cat.hpp"

void Cat::makeSound() const{
    std::cout << "Cat: Meow Meoow..." << std::endl;
}

Cat:: Cat(){
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
    this->_catBrain = new Brain();
}

Cat:: ~Cat(){
    std::cout << "Cat distructor called" << std::endl;
    delete this->_catBrain;
    std::cout << "Cat's brain deleted" << std::endl;
}

Cat:: Cat(const Cat& c){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = c;
}

Cat& Cat::operator=(const Cat& c) {
    std::cout << "Cat's copy assignment operator called" << std::endl;
    this->_catBrain = new Brain( *c._catBrain );
    return *this;
}