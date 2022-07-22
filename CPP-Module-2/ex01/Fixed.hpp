#ifndef FIXED_H
#define FIXED_H
#include <cmath>
#include <iostream>

class Fixed{
    private:
        int number;
        static const int fract = 8;
    public:
        Fixed( void );
        Fixed(const int num);
        Fixed(const float f);
        Fixed(const Fixed& that);
        ~Fixed();
        Fixed& operator=(const Fixed& that);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif