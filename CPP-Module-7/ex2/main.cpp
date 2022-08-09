#include <iostream>
#include "Array.hpp"

int main(int, char**)
{
    std::cout << "creating an empty array" << std::endl;
    Array <float> unkown;

    std::cout << "\ncreating an array of 10 elements" << std::endl;
    Array<int> numbers(10);
    Array<int> arr(5);

    std::cout << "\nfilling an array of 10 elements" << std::endl;
    for(int i=0; i<numbers.getSize() ; i++)
        numbers[i] = i;
    
    std::cout << "\nprinting an array of 10 elements" << std::endl;
    try{
        for(int i=0; i<numbers.getSize() ; i++)
            std::cout << numbers[i] << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\ntesting our copy assignment operator" << std::endl;
    try{
        arr = numbers;
        for(int i=0; i<arr.getSize() ; i++)
            std::cout << arr[i] << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\ntesting our copy constructor" << std::endl;
    Array<int> copy(numbers);
    for(int i=0; i<copy.getSize() ; i++)
        std::cout << copy[i]<< std::endl;

    
    return 0;
}


// int main(int, char**)
// {
//     std::cout << "creating an empty array" << std::endl;
//     Array <float> unkown;

//     std::cout << "\ncreating an array of 10 elements" << std::endl;
//     Array<char> chara(10);
//     Array<char> arr(5);

//     std::cout << "\nfilling an array of 10 elements" << std::endl;
//     for(int i=0; i<chara.getSize() ; i++)
//         chara[i] = i + 97;
    
//     std::cout << "\nprinting an array of 10 elements" << std::endl;
//     try{
//         for(int i=0; i<chara.getSize() ; i++)
//             std::cout << chara[i] << std::endl;
//     }
//     catch(std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     std::cout << "\ntesting our copy assignment operator" << std::endl;
//     try{
//         arr = chara;
//         for(int i=0; i<arr.getSize() ; i++)
//             std::cout << arr[i] << std::endl;
//     }
//     catch(std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     std::cout << "\ntesting our copy constructor" << std::endl;
//     Array<char> copy(chara);
//     for(int i=0; i<copy.getSize() ; i++)
//         std::cout << copy[i]<< std::endl;

    
//     return 0;
// }

// #define MAX_VAL 750u

// int main(){

//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;

//     return 0;
// }






















