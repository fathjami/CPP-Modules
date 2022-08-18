#include "Span.hpp"

Span::Span():_size(0){

}

Span::Span(unsigned int N):_size(N){
     
}

Span::~Span(){
 
}

Span::Span(const Span& that){
        *this = that;
}

Span& Span::operator=(const Span& that){
    if (this != &that) {
        this->_size = that._size;
        this->_list = that._list;
    }
    return *this;
}

void Span::addNumber(int num){
    try{
        if (this->_list.size() == this->_size)
            throw fullSpan();
        else
            this->_list.push_back(num);
    }
    catch(std::exception& exc){
            std::cout << exc.what() << std::endl;
    }
}

 void Span::addNumber(int size, std::list<int>::iterator first, std::list<int>::iterator last){
         try{
        if (this->_size != size)
            throw fullSpan();
        else
            this->_list.insert(this->_list.end(), first, last);
    }
    catch(std::exception& exc){
            std::cout << exc.what() << std::endl;
    }
 }

unsigned int Span:: shortestSpan() const{

    if (this->_size < 2)
        throw Span::noSpanFound();
    std::list <int>::const_iterator I;
    std::list <int>::const_iterator It;
    unsigned int min = this->longestSpan();
    for (I = this->_list.begin(); I != this->_list.end(); I++)
    {
         for (It = this->_list.begin(); It != this->_list.end(); It++)
         {
            if (*I == *It )
                continue ;
            if (std::abs(*It - *I) < min)
                min = std::abs(*It - *I);
         }
    }
    return min;
}


unsigned int Span:: longestSpan(void) const{
    if (this->_size < 2)
        throw Span::noSpanFound();
    return *std::max_element(this->_list.begin(), this->_list.end()) - *std::min_element(this->_list.begin(), this->_list.end());
}