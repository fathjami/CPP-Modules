
#include "Form.hpp"


Form::Form( std::string name, unsigned int gradeToSign, unsigned int gradeToExec ) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExec) {
    if (gradeToSign > 150 || gradeToExec > 150)
        throw Form::GradeTooLowException();
    else if (gradeToSign < 1 || gradeToExec < 1)
        throw Form::GradeTooHighException();
}

Form::~Form() {
}

Form::Form( const Form& other ) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {
}

Form&   Form::operator=( const Form& other ) {
    if (this != &other) {
        this->_signed = other._signed;
    }
    return (*this);
}

void    Form::beSigned( Bureaucrat& bureaucrat )
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    _signed = true;
}

unsigned int Form::getGradeToSign( void ) const {
    return (this->_gradeToSign);
}

std::string   Form::getName( void ) const {
    return (this->_name);
}

bool    Form::getSigned( void ) const {
    return (this->_signed);
}

std::ostream& operator<<( std::ostream& os, const Form& form ) {
    os << "Form " << form.getName() << " is " << (form.getSigned() ? "signed" : "not signed") << " and has a grade of " << form.getGradeToSign() << std::endl;
    return os;
}

void Form::exec(Bureaucrat const & executor) const {
    if (this->_signed)
        this->execute(executor);
    else
        throw Form::NotSignedException();
}

unsigned int Form::getGradeToExecute( void ) const {
    return (this->_gradeToExecute);
}