#ifndef POINT_H
#define POINT_H
#include "Fixed.hpp"

class Point{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point(void);
        ~Point(void);
        Point(const float x, const float y);
        Point(const Point &p);
        Point& operator=(Point& p);
        Fixed getx() const;
        Fixed gety() const;
        
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif