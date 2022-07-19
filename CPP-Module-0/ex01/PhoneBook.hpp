#ifndef PHONEBOOK_HPP
# define  PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{

    Contact contact[8];
public:
    int     size;
    void    add_contact();
    void    search_contact();
    void    get_contact_index();
    void    print_contact(int i);
};

#endif