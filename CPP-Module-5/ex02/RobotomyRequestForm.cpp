
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(target),Form("RbotomyRequestForm", 72, 45)
{
    // std::cout << "RobotomyRequestForm created for " << target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src)
{    
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << "RobotomyRequestForm destroyed for " << this->getName() << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    if (this != &rhs)
        this->Form::operator=(rhs);
    //std::cout << "RobotomyRequestForm assigned for " << this->getName() << std::endl;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
        // std::cout << "RobotomyRequestForm execute called"<< std::endl;
        if (executor.getGrade() > this->getGradeToExecute())
            throw Form::GradeTooLowException();
            
        static int i;
        std::cout << "\nBZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ" << std::endl;
        if (!i)
        {
            i = 1;
            std::cout << this->getTarget() << " has been robotomized" << std::endl;
        }
        else{
            i = 0;
            std::cout << this->getTarget() << " has not been robotomized" << std::endl;
        }
}

std::string RobotomyRequestForm::getTarget() const{
    return this->_target;
}