#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // std::cout << "----Testing copy assignment operator----" << std::endl;
    // const Cat c;
    // Cat cat;
    // cat = c;
    // std::cout <<  "----Testing copy constructor----" << std::endl;
    // const Dog d;
    // Dog dog(d);

    std::cout << "---creating and deleting Animal's array---" << std::endl;
    const Animal* animals[2] = {new Cat(), new Dog()};
    delete animals[0];
    delete animals[1];

return 0;
}
/*
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
const Cat c;
Cat cat;
cat = c;
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();
// delete meta;
// delete j;
// delete i;
*/