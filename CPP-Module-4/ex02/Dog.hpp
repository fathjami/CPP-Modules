#ifndef DOG_HPP
#define DOG_HPP
#include "Brain.hpp"
#include "Animal.hpp"

class Dog: public Animal{
    private:
        Brain* _dogBrain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog& d);
        Dog& operator=(const Dog& d);
       void makeSound() const;
};
#endif