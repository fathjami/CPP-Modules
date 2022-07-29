
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &src);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
        void execute(Bureaucrat const &executor) const;
        std::string getTarget() const;
};

#endif 