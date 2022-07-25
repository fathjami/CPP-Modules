#ifndef CAT_HPP
#define CAT_HPP
#include "Brain.hpp"
#include "Animal.hpp"

class Cat: public Animal{ 
    private:
        Brain* _catBrain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat& c);
        Cat& operator=(const Cat& c);
        void makeSound() const;
};
#endif