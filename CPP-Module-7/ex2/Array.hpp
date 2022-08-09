#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array{
    private:
        T *arr;
        unsigned int n;
    public:
        Array():arr(new T()), n(0){
            std::cout << "default constructor\n"<< std::endl;
        }

        ~Array()
        {
            std::cout << "destructor called" << std::endl;
            delete []this->arr;
        }
        Array(unsigned int s):arr(new T[s]), n(s){
            std::cout << "constructor\n"<< std::endl;
        }

        Array(const Array& that):n(that.getSize()), arr(new T[that.getSize()]){
            *this = that;
        }

        Array& operator=(const Array& that){
            for(int i = 0 ; i<this->n; i++)
            {
                if (i >= that.getSize())
                    throw Array::out_of_range();
                this->arr[i] = that.arr[i];
            }
            return *this;
        }

        T& operator[](int i) const{
            if (i < 0 || i >= this->n)
                throw Array::out_of_range();
            return this->arr[i];
        }
        class out_of_range: public std::exception{
           public:
                virtual const char* what() const throw() {return "Exception: index out of rang!";}; 
        };
        unsigned int getSize() const{
            return this->n;
        }
        T* getArray() const{
            return this->arr;
        }

};
#endif