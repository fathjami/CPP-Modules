#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat{
    private:
        const std::string _name;
        int _grade;
    public:

        class GradeTooHighException: public std::exception{
            public:
                virtual const char* what() const throw() {return ("Exception: Grade too high!");}
        };

        class GradeTooLowException: public std::exception{
            public:
                virtual const char* what() const throw() {return ("Exception: Grade too low!");}

        };

        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& b);
        Bureaucrat& operator=(const Bureaucrat& b);
        
        std::string  getName() const;
        int getGrade() const;

        void increment();
        void decrement();

        void signForm(Form& f) const;
};

std::ostream &operator<<(std::ostream &outputFile,const Bureaucrat&  b);
#endif