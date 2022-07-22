#include "Fixed.hpp"

Fixed::Fixed(void){
            std::cout << "Default constructor called" << std::endl;
            this->number = 0;
        }

Fixed::Fixed(const int i){
            std::cout << "Int constructor called" << std::endl;
            this->number = (i << this->fract);
}

Fixed::Fixed(const float f){
            std::cout << "Float constructor called" << std::endl;
            this->number = std::roundf(f *( 1 << this->fract));
}

Fixed::Fixed(const Fixed& that){
            std::cout << "Copy constructor called" << std::endl;
            this->number = that.getRawBits();
        }

Fixed::~Fixed(){
            std::cout << "Destructor called" << std::endl;
        }

Fixed& Fixed::operator=(const Fixed& that){
            std::cout << "Copy assignment operator called" << std::endl;
            this->number = that.getRawBits();
            return *this;
        }

int Fixed::getRawBits(void) const{
            // std::cout << "getRawBits member function called" << std::endl;
            return this->number;
        }

void Fixed::setRawBits(int const raw){
            this->number = raw;
            // std::cout << "setRawBits member function called" << std::endl;
        }

float Fixed::toFloat( void ) const{
        return ((this->number / (float)(1 << this->fract)));
}

int Fixed::toInt( void ) const{
        return ((this->number / (float)(1 << this->fract)));
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o <<  i.toFloat();
    return o;
}


//to convert a floating point to a fixed point we multiply the float number
// with the base raised to the power of n (n the size of the fractional part)

// to do the opposite we devide

// what is fixed point: we create a fixed point to fix the size of the fractional part