
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat( void ) {

}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if ( this != &other ) {
        this->_grade = other.getGrade();
    }
    return *this;
}

std::string Bureaucrat::getName( void ) const {
    return this->_name;
}

unsigned int    Bureaucrat::getGrade( void ) const {
    return this->_grade;
}

void            Bureaucrat::incrementGrade( void ) {
    if ( this->_grade - 1 < 1 )
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void            Bureaucrat::decrementGrade( void ) {
    if ( this->_grade + 1 > 150 )
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

void        Bureaucrat::signForm( Form& form ) {
    form.beSigned(*this);
    if ( form.getSigned() )
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    else 
        std::cout << this->_name << " couldn't sign " << form.getName() << " because grade is too low"<< std::endl;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return (out);
}