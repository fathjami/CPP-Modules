#include "Point.hpp"

Point:: Point():x(0), y(0){
    // std::cout << "default constructor" << std::endl;
}

Point:: ~Point(){
    // std::cout << "destructor" << std::endl;
}

Point:: Point(const float a, const float b): x(a), y(b){
}

Point:: Point(const Point &p): x(p.x), y(p.y){
}

 Point& Point::operator=(Point& p){
    (Fixed) (this->x) = p.x;
    (Fixed) (this->y) = p.y;
     return *this;
 }

Fixed Point::getx() const
{
    return (this->x);
}
Fixed Point::gety() const
{
    return (this->y);
}
