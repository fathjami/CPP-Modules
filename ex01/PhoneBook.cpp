#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

void PhoneBook :: add_contact()
{
        size += contact[size % 8].create_contact();
}

std:: string check_lenght(std:: string str)
{
    if ( str.length() > 10)
        str = str.substr(0,9) + '.';
    return str;
}

void    PhoneBook:: get_contact_index()
{
    int index;

    std:: cout << "Enter the index of the contact needed: ";
    std:: cin >> index;
    if (std:: cin.good() && (index >= 0 && index < 9))
    {
        if (contact[index].first_name == "")
            std:: cout << "Contact not found!" << std:: endl;
        else
             print_contact(index);
    }
    else if(!std:: cin.good())
    {
        std:: cout << "Numeric input required!" << std:: endl;
        std:: cin.clear();
        std:: cin.ignore();
    }
    else if (index > 8)
        std:: cout << "Index out of range!" << std:: endl;
}

void    PhoneBook :: print_contact(int i)
{
    std:: cout << "-- CONTACT #"<< i << " --\n" << std:: endl;
    for(int i = 0; contact[i].first_name != "" && i < 8; i++)
    {
        std:: cout << "First-name: " << contact[i].first_name << std:: endl;
        std:: cout << "Last-name: " << contact[i].last_name << std:: endl;
        std:: cout << "Nick-name: " << contact[i].nickname << std:: endl;
        std:: cout << "Darkest-secret: " << contact[i].darkest_secret << std:: endl;
        std:: cout << "Phone-number: " << contact[i].number << std:: endl;
    }
}
void    PhoneBook :: search_contact()
{
    std:: cout << "---> PHONEBOOK CONTACTS :\n" << std:: endl;
    for(int i = 0; contact[i].first_name != "" && i < 8; i++)
    {  
        std:: cout << std:: setw(10) << i << '|';
        std:: cout << std:: setw(10) << check_lenght(contact[i].first_name) << '|';
        std:: cout << std:: setw(10) << check_lenght(contact[i].last_name) << '|';
        std:: cout << std:: setw(10) << check_lenght(contact[i].nickname) << "|\n" << std:: endl;
    }
    get_contact_index();
    
}