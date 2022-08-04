#include "Serialization.hpp"

int main()
{
    Data* test;
    test->name = "me";
    std::cout << "name: " << deserialize(serialize(test))->name << std::endl;
    return 0;
}