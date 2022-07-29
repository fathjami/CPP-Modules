#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class  Form;
class RobotomyRequestForm;
class ShrubberyCreationForm;
class PresidentialPardonForm;


class Intern{
public:

    Intern(void);
    ~Intern(void);
    Intern(const Intern& i);
    Intern& operator=(const Intern& i);
    Form*   makeForm(std::string, std::string);
};
#endif