
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :_target(target) ,Form("PresidentialPardonForm", 25, 5)
{
    std::cout << "PresidentialPardonForm created for " << target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src)
{ 
    // std::cout << "PresidentialPardonForm copied for " << this->getName() << std::endl;   
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destroyed" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    if (this != &rhs)
    {
        this->Form::operator=(rhs);
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    std::cout << "I pardon " << this->getTarget() << std::endl;
}

std::string PresidentialPardonForm::getTarget() const{
    return this->_target;
}