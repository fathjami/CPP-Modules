#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP
#include <stack>
#include <deque>
#include <list>
#include <iostream>

template <typename Type, class Container = std::deque<Type> >
class MutantStack: public std::stack <Type , Container>{
    public:
        MutantStack(){
        }
        ~MutantStack(){
        }
        MutantStack(const MutantStack& a){
            *this = a;
        }
        MutantStack& operator=(const MutantStack& a){
            std::stack<Type, Container>::operator=(a);
            return *this;
        }
        typedef  typename Container::iterator iterator;
        iterator begin(){return this->c.begin();}
        iterator end(){return this->c.end();}
};
#endif