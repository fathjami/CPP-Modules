#include "Span.hpp"

int main()
{
Span sp = Span(10);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout <<"shortest span for sp: "<< sp.shortestSpan() << std::endl;
std::cout << "longeest span for sp: "<< sp.longestSpan() << std::endl;

std::list<int> listOfInts(10000, 1);
listOfInts.push_back(10);
listOfInts.push_front(3);
listOfInts.push_back(5);
Span s= Span(listOfInts.size());
s.addNumber(listOfInts.size(), listOfInts.begin(), listOfInts.end());
std::cout << "shortest span for s: " << s.shortestSpan() << std::endl;
std::cout <<"longestest span for s: "<< s.longestSpan() << std::endl;

std::cout <<"\n testing an emty Span" << std::endl;
Span e=Span(0);
try{
    std::cout << e.shortestSpan() << std::endl;
    std::cout <<  e.longestSpan() << std::endl; 
}
catch (Span::noSpanFound& ex){
    std::cout << ex.what() << std::endl;
}

return 0;
}
