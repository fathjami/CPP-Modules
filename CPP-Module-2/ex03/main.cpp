#include "Point.hpp"


int main ( void ) {
    if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(30, 15) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
    return 0;
}
// A = (0, 0), B = (10, 30), C = (20, 0), P(10, 15)
//A = (0, 0), B = (10, 30), C = (20, 0), P(30, 15)