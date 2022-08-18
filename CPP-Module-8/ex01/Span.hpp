#pragma once

#include <list>
#include <algorithm>
#include <iostream>

class Span{
    private:
        unsigned int _size;
        std::list <int> _list;
    public:
        Span(void);
        Span(unsigned int N);
        ~Span();
        Span(const  Span&);
        Span& operator=(const Span&);
        void addNumber(int);
        void addNumber(int size, std::list<int>::iterator, std::list<int>::iterator);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
        unsigned int getSize() const;
        void setSize();
        class fullSpan: public std::exception{
            public:
                virtual const char* what() const throw() {return "Span is full!";}
        };

        class noSpanFound: public std::exception{
            public:
                virtual const char* what() const throw() {return "No span can be found";}
        };

};
