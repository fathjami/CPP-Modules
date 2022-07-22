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
        //>, <, >=, <=, == and !=.
        bool operator>(const Fixed& that) const;
        bool operator<(const Fixed& that) const;
        bool operator<=(const Fixed& that) const;
        bool operator>=(const Fixed& that) const;
        bool operator==(const Fixed& that) const;
        bool operator!=(const Fixed& that) const;
        // +, -, *, and /.
        float operator+(const Fixed& that);
        float operator-(const Fixed& that);
        float operator*(const Fixed& that);
        float operator/(const Fixed& that);
        //++ --
        Fixed operator++(void); //pre
        Fixed operator++(int); //post
        Fixed operator--(void); //pre
        Fixed operator--(int); //post
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;

        //max min
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min( const Fixed& a, const Fixed&b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max( const Fixed& a, const Fixed&b);
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif