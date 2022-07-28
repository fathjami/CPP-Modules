
#ifndef FORM_HPP
# define FORM_HPP

#include <fstream>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class   Bureaucrat;

class Form
{
private:
    const std::string   _name;
    bool                _signed;
    const unsigned int  _gradeToSign;
    const unsigned int  _gradeToExecute;
public:
    Form();
    Form(std::string, unsigned int, unsigned int);
    ~Form();

    Form(const Form& );
    Form&     operator=(const Form& );

    std::string     getName( void ) const;
    unsigned int    getGradeToSign( void ) const;
    unsigned int    getGradeToExecute( void ) const;
    bool            getSigned( void ) const;
    void            beSigned( Bureaucrat& );

    virtual void    execute( Bureaucrat const &executor ) const = 0;

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
    class NotSignedException : public std::exception
    {
        public:
            virtual const char* what() const throw() { return ("Form is not signed"); }
    };

    void                exec(Bureaucrat const &executor) const;
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif 