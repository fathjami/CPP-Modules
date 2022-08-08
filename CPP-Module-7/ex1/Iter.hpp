#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void print(T a){
    std::cout << a << std::endl;
}

template <typename T>
void iter(T arr[], int size, void (*func)(T a)){
    for (int i=0; i<size; i++)
        func(arr[i]);
}


#endif