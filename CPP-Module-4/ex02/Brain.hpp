#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain{
    private:
        std::string _ideas[100];
        
    public:
    Brain(){
        std::cout << "brain constructor" << std::endl;
    }
    ~Brain(){
        std::cout << "brain destructor" << std::endl;
    }
    Brain(const Brain& b){
        *this = b;
    }
    Brain& operator=(const Brain& b){
        for(int i=0; i<100; i++)
            this->_ideas[i] = b._ideas[i];
        return *this;
    }

};
#endif