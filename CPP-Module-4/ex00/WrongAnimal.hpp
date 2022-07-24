#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal{
    public:
        WrongAnimal(){
            std::cout << "wrongAnimal constructor called" << std::endl;
        }
        ~WrongAnimal(){
            std::cout << "wrongAnimal distructor called" << std::endl; 
        }
        void makeSound() const{
            std::cout << "I am a wrong animal" << std::endl;
        }
    
};
#endif