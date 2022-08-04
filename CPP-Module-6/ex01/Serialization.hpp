#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP
#include <iostream>


struct Data
{
    std::string name;
};

Data* deserialize(uintptr_t raw);

uintptr_t serialize(Data* ptr);
#endif