#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade){
    std::cout << "constructor called" << std::endl;
    try{
        if (grade > 150){
            throw Bureaucrat::GradeTooLowException();
        } else if (grade < 1) {
            throw Bureaucrat::GradeTooHighException();
        }
    }
    catch (std::exception& excep){
        std::cout << excep.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat& b){
    *this = b;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b){
    this->_grade = b._grade;
    return *this;
}

std::string Bureaucrat:: getName() const {
    return this->_name;
}

int Bureaucrat:: getGrade() const{
    return this->_grade;
}

void Bureaucrat::increment(){
    try{
        this->_grade--;
        if (this->_grade < 1)
            throw Bureaucrat::GradeTooHighException();
    }catch(const Bureaucrat::GradeTooHighException& excp){
        std::cout << excp.what() << std::endl;
        this->_grade++;
    }
}

void Bureaucrat::decrement(){
    try{
        this->_grade++;
        if (this->_grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }catch(const Bureaucrat::GradeTooLowException& excp){
        std::cout << excp.what() << std::endl;
        this->_grade--;
    }
}

std::ostream &operator<<(std::ostream &outputFile, const Bureaucrat& b)
{
	outputFile << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (outputFile);
}