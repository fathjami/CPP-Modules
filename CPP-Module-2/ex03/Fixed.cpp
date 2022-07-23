#include "Fixed.hpp"

Fixed::Fixed(void){
        //     std::cout << "Default constructor called" << std::endl;
            this->number = 0;
        }

Fixed::Fixed(const int i){
        //     std::cout << "Int constructor called" << std::endl;
            this->number = (i << this->fract);
}

Fixed::Fixed(const float f){
        //     std::cout << "Float constructor called" << std::endl;
            this->number = std::roundf(f *( 1 << this->fract));
}

Fixed::Fixed(const Fixed& that){
        //     std::cout << "Copy constructor called" << std::endl;
            this->number = that.getRawBits();
        }

Fixed::~Fixed(){
        //     std::cout << "Destructor called" << std::endl;
        }

Fixed& Fixed::operator=(const Fixed& that){
        //     std::cout << "Copy assignment operator called" << std::endl;
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

bool Fixed::operator>(const Fixed& that) const{
        return (this->number > that.number);
}

bool Fixed::operator<(const Fixed& that) const{
        return (this->number < that.number);
}

bool Fixed::operator>=(const Fixed& that) const{
        return (this->number >= that.number);
}

bool Fixed::operator<=(const Fixed& that) const{
        return (this->number <= that.number);
}

bool Fixed::operator==(const Fixed& that) const{
        return (this->getRawBits() == that.getRawBits());
}

bool Fixed::operator!=(const Fixed& that) const{
        return (this->getRawBits() != that.getRawBits());
}

Fixed Fixed::operator+(const Fixed& that){
        return Fixed(this->toFloat() + that.toFloat());
}
Fixed Fixed::operator-(const Fixed& that){
       return Fixed(this->toFloat() - that.toFloat());
}

Fixed Fixed::operator*(const Fixed& that){
        return Fixed(this->toFloat() * that.toFloat());
}

Fixed Fixed::operator/(const Fixed& that){
        return Fixed(this->toFloat() / that.toFloat());
}

Fixed Fixed::operator++(void){
        Fixed temp;
        temp.number = ++this->number;
        return temp;
}

Fixed Fixed::operator--(void){
        Fixed temp;
        temp.number = --this->number;
        return temp;
}

Fixed Fixed::operator++(int){
        Fixed temp;
        temp.number = this->number++;
        return temp;
}

Fixed Fixed::operator--(int){
        Fixed temp;
        temp.number = this->number--;
        return temp;
}

 const Fixed& Fixed::min( const Fixed& a, const Fixed& b){
        if (a.toFloat() < b.toFloat())
                return a;
        return b;
}

 const Fixed& Fixed::max( const Fixed& a, const Fixed& b){
        if (a.toFloat() > b.toFloat())
                return a;
        return b;
}

 Fixed& Fixed::min( Fixed& a, Fixed& b){
        if (a.toFloat() < b.toFloat())
                return a;
        return b;
}
 Fixed& Fixed::max(  Fixed& a,  Fixed&b){
        if (a.toFloat() > b.toFloat())
                return a;
        return b;
}