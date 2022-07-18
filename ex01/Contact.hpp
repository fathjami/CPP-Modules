#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
public:
    std:: string first_name;
    std:: string last_name;
    std:: string nickname;
    std:: string darkest_secret;
    std:: string number;

    int create_contact();
};

#endif