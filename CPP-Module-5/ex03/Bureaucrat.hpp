
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string   _name;
    unsigned int        _grade;

    Bureaucrat();

public:
    Bureaucrat(std::string, unsigned int);
    ~Bureaucrat();

    Bureaucrat(const Bureaucrat& );
    Bureaucrat&     operator=(const Bureaucrat& );

    std::string     getName( void ) const;
    unsigned int    getGrade( void ) const;

    void            incrementGrade( void );
    void            decrementGrade( void ); 

    void            signForm( Form& );
    void            executeForm( Form& );

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw() { return ("Grade is too high"); }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw() { return ("Grade is too low"); }
    };

};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif 