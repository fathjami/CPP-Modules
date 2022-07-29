#include "Intern.hpp"

Intern::Intern(){
    // std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern(){
     // std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern& i){
    // std::cout << "Intern copy constructor called" << std::endl;
    *this = i;
}

Intern& Intern::operator=(const Intern& i){
    return *this;
}

Form* robo(std::string target)
{
    return new RobotomyRequestForm(target);   
}

Form* shrubb(std::string target)
{
    return new ShrubberyCreationForm(target);
}

Form* presid(std::string target)
{
    return new PresidentialPardonForm(target);
}


Form* Intern::makeForm(std::string form, std::string target){
    std::string arr[3] = {"robotomy request",
                          "shrubbery creation",
                          "presidential pardon"};
    Form*   (*func[3])(std::string target) = {&robo,
                                           &shrubb,
                                           &presid};
    int i;       
    for(i=0; i<3; i++){
        if (form.compare(arr[i]) == 0)
        {
            std::cout << "Intern creats " << form << " form " << std::endl;
            return (func[i](target));
        }
    }
    std::cout << "No matching form name :(" << std::endl;
    return NULL;
}