#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){

    Form a;
    std::cout << "\ntrying to create a Form with valid grades" << std::endl;
    Form b("you", 5, 5);
    std::cout << b;

    std::cout << "\ntrying to create a Form with invalid grades" << std::endl;
    Form c("me", 151, 0);
    std::cout << c;

    std::cout << "\ntesting Form copy assingnment" << std::endl;
    Form e("they", 23, 50);
    e = c;
    std::cout << e;


    std::cout << "\ntrying to sign a form" << std::endl;
    const Bureaucrat s("someone", 4);
    b.beSigned(s);


    return 0;
}