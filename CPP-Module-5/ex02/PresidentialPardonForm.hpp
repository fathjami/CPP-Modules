
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        PresidentialPardonForm();

    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &src);
        virtual ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
        void execute(Bureaucrat const &executor) const;
};

#endif 