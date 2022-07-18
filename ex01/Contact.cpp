#include "Contact.hpp"
#include <iostream>

int Contact:: create_contact()
{
    std:: cin.ignore();
    
    std:: cout << "first-name: ";
    std:: getline(std:: cin, first_name);
    std:: cout << "last-name: ";
    std:: getline(std:: cin, last_name);
    std:: cout << "nickname: ";
    std:: getline(std:: cin, nickname);
    std:: cout << "darkest secret: ";
    std:: getline(std:: cin, darkest_secret);
    std:: cout << "number: ";
    std:: getline(std:: cin, number);
    return (!first_name.empty() && !last_name.empty() && !nickname.empty()\
    && !darkest_secret.empty() && !number.empty());
}