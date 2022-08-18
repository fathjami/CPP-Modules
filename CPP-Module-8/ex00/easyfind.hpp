#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <list>
#include <array>
#include <algorithm>
#include <iostream>

class notFound: public std::exception{
    public:
        virtual const char* what() const throw() {return "Element not found!";}
};

template <typename T>
void easyfind(T& tofind, int pattern){

    typename T::iterator result;
    result = std::find(tofind.begin(), tofind.end(), pattern);
    if (result == tofind.end())
        throw notFound();
    else
        std::cout << "Element found " << std::endl;
}

#endif