#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed{
    private:
        int number;
        static const int fract = 8;
    public:
        Fixed(void){
            std::cout << "Default constructor called" << std::endl;
            this->number = 0;
        }
        Fixed(Fixed& that){
            std::cout << "Copy constructor called" << std::endl;
            this->number = that.getRawBits();
        }
        ~Fixed(){
            std::cout << "Destructor called" << std::endl;
        }
        Fixed& operator=(const Fixed& that){
            std::cout << "Copy assignment operator called" << std::endl;
            this->number = that.getRawBits();
            return *this;
        }
        int getRawBits(void) const{
            std::cout << "getRawBits member function called" << std::endl;
            return this->number;
        }
        void setRawBits(int const raw){
            this->number = raw;
            std::cout << "setRawBits member function called" << std::endl;
        }
};
#endif