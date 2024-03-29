#include "Iter.hpp"


int main(){
    int arr[4] = {1 ,2 ,3, 4};
    float arr1[4] = {1.1f ,2.1f ,3.1f, 4.1f};
    char arr2[4] = {'a', 'b', 'b', 'd'};
    std::string arr3[4] = {"me", "you", "her", "they"};

    std::cout << "Testing with int" << std::endl;
    iter(arr, 4, &print);

    std::cout << "Testing with float" << std::endl;
    iter(arr1, 4, &print);

    std::cout << "Testing with char" << std::endl;
    iter(arr2, 4, &print);

    std::cout << "Testing with string" << std::endl;
    iter(arr3, 4, &print);


    return 0;
}

// class Awsome{

// public:
// Awsome(void): _n(42) {return;}
// int get(void)const {return this->_n;}
// private:
// int _n;
// };

// std::ostream &operator<<(std::ostream &o, Awsome const &rhs) {o<<rhs.get(); return o;}

// template <typename T>
// void print(T const &x){std::cout << x << std::endl; return;}

// int main(){
//     int tab[] = {0,1,2,3,4};
//     Awsome tab2[5];

//     iter(tab, 5, print);
//     iter(tab2, 5, print);
// }