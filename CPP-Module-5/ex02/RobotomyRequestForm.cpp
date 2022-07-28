
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :Form(target, 72, 45)
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
            std::cout << "Bureaucrat " << executor.getName() << " has been robotomized" << std::endl;
        }
        else{
            i = 0;
            std::cout << "Bureaucrat " << executor.getName() << " has not been robotomized" << std::endl;
        }
}