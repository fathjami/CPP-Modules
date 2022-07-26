#include "Bureaucrat.hpp"

int main(void){

    std::cout << "\ntrying to create a bureaucrat with a valid grade" << std::endl;
    Bureaucrat b("me", 5);
    std::cout << b;

    std::cout << "\ntrying to increment a grade (not valid)" << std::endl;
    Bureaucrat a("you", 1);
    std::cout << a;
    a.increment();

    std::cout << "\ntrying to increment a grade (valid)" << std::endl;
    Bureaucrat d("you", 10);
    std::cout << d;
    d.increment();

    std::cout << "\ntrying to decrement a grade (not valid)" << std::endl;
    Bureaucrat c("her", 150);
    std::cout << c;
    c.decrement();

     std::cout << "\ntesting copy assingnment" << std::endl;
    Bureaucrat e("they", 23);
    e = c;
    std::cout << e;
    return 0;
}