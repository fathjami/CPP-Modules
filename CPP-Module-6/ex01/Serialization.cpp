#include "Serialization.hpp"

uintptr_t serialize(Data* ptr){
   uintptr_t uns =  reinterpret_cast <uintptr_t> (ptr);
    return uns; 
}

Data* deserialize(uintptr_t raw){
    Data* d = reinterpret_cast <Data*> (raw);
    return d;
}