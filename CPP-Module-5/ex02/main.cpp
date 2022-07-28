
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>

int	main( void )
{
	Bureaucrat				bureaucrat("bureaucrat", 4);
	ShrubberyCreationForm	shrubberyCreationForm("shrubberyCreationForm");
	std::cout << "\n------> Testing the ShrubberyCreationForm class:\n";
	try {
		bureaucrat.signForm(shrubberyCreationForm);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try{
		shrubberyCreationForm.exec(bureaucrat);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << "\n-------> Testing the RobotomyRequestForm class:\n";
	RobotomyRequestForm	robotomyRequestForm("robotomyRequestForm");
	try {
		bureaucrat.signForm(robotomyRequestForm);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try{
		robotomyRequestForm.exec(bureaucrat);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "testing the Robotomisation" << std::endl;
		try{
		robotomyRequestForm.exec(bureaucrat);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << "\n----------> Testing the PresidentialPardonForm class:\n";
	PresidentialPardonForm	presidentialPardonForm("presidentialPardonForm");
	try {
		bureaucrat.signForm(presidentialPardonForm);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try{
		presidentialPardonForm.exec(bureaucrat);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}