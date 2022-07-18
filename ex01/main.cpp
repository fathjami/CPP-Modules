#include <iostream>
#include <cstring>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phonebook;
    phonebook.size = 0;
    std:: string input;
    std:: cout << "Welcome to your PhoneBook :)\n";
    std:: cout << "Type : ADD (to add a contact.)\n";
    std:: cout << "Type : SEARCH (to search a contact.)\n";
    std:: cout << "Type : EXIT (to quit the program.)\n";
    do
    {
        std:: cout << ">>> ";
        std:: cin >> input;
        if(input.compare("ADD") == 0)
          phonebook.add_contact();
        else if (input.compare("SEARCH") == 0)
            phonebook.search_contact();
    }while (input.compare("EXIT"));
    
    return 0;
}