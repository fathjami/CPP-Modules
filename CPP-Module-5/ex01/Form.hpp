#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form{
    private:
        const std::string _name;
        bool _signed;
        const int _sign_grade;
        const int _exec_grade;
        void _check_grade();
    public:
        class GradeTooHighException: public std::exception{
            public:
                virtual const char* what() const throw() {return ("Exception: Grade too high!");}
        };

        class GradeTooLowException: public std::exception{
            public:
                virtual const char* what() const throw() {return ("Exception: Grade too low!");}

        };

        Form();
        ~Form();
        Form(std::string name, int sg , int eg);
        Form(const Form& f);
        Form& operator=(const Form& f);

        std::string getName()const;
        bool getSign()const;
        int getGradeSign()const;
        int getExecSign()const;

        void beSigned(const Bureaucrat& b);

};

std::ostream &operator<<(std::ostream &out, Form const &f);
#endif