#include <iostream>

class Base{public: virtual ~Base(){ std::cout << "h";}};
class A:public Base{};
class B:public Base{};
class C:public Base{};


Base * generate(void){
    Base* res;

    int i = rand() % 10;
    if (!(i % 2)){
        res = new A();
        std::cout << "new A object" << std::endl;
    }
    else if (!(i % 3))
    {
        res = new B();
        std::cout << "new B object " << std::endl;
    }
    else{
        res = new C();
        std::cout << "new C object" << std::endl;
    }
    return res;
}

void identify(Base* p){
    if (dynamic_cast <A*> (p))
        std::cout << "the pointer's real type is A*" << std::endl;
    else if (dynamic_cast <B*> (p))
        std::cout << "the pointer's real type is B*" << std::endl;
    else if (dynamic_cast <C*> (p))
        std::cout << "the pointer's real type is C*" << std::endl;
}

void identify(Base& p){

    try{
        Base& a = dynamic_cast <A&> (p);
        std::cout << "the pointer's real type is A* " << std::endl;
        return;
    }
    catch(std::bad_cast& bc){
        // std::cout << bc.what();
    }

    try{
        Base& b = dynamic_cast <B&> (p);
        std::cout << "the pointer's real type is B* " << std::endl;
        return;
    }
    catch(std::bad_cast& bc){
        // std::cout << bc.what();
    }

    try{
        Base& c = dynamic_cast <C&> (p);
        std::cout << "the pointer's real type is C* " << std::endl;
        return;
    }
    catch(std::bad_cast& bc){
        // std::cout << bc.what();
    }
}
int main()
{
    for (int i = 0; i < 5; i++){
        std::cout << "Test#" << i << std::endl;
        Base* test = generate();
        identify(test);
        identify(*test);
        delete test;
    }
    return 0;
}