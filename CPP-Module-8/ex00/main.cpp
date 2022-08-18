#include "easyfind.hpp"

int main()
{
    std::map< int > 
    std::list <int> numbers;
    numbers.push_back(0);
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    try{
        easyfind(numbers, 3);
    }
    catch (std::exception& exc){
        std::cout << exc.what() << std::endl;
    }
    return 0;
}

// int main()
// {
//     std::array <int, 6> numbers={0,1,2,3,4,5};
//     try{
//         easyfind(numbers, 9);
//     }
//     catch (std::exception& exc){
//         std::cout << exc.what() << std::endl;
//     }
//     return 0;
// }