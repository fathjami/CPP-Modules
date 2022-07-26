#include "Form.hpp"

Form::Form():_name("unkonw"), _signed(false), _sign_grade (5), _exec_grade(5)
{
    std::cout << "Form default constructor called\n"
              << "an unknow form created" 
              << std::endl;

}

Form:: ~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

void Form::_check_grade(){

        if ( _sign_grade > 150 || _exec_grade > 150){
            throw Form::GradeTooLowException();
        } else if (_sign_grade < 1 || _exec_grade < 1) {
            throw Form::GradeTooHighException();
        }
}

Form::Form(std::string name, int sg , int eg): _name(name), _signed(false), _sign_grade(sg), _exec_grade(eg){
    try {
        this->_check_grade();
    }
    catch(GradeTooLowException& except){
        std::cout << except.what() << std::endl;  
    }
}

Form::Form(const Form& f):_name(f._name), _sign_grade(f._sign_grade), _exec_grade(f._exec_grade)
{
    std::cout << "form copied" << std::endl;
    *this = f;
}

Form& Form::operator=(const Form& f){
    this->_signed = f.getSign();
    return *this;
}

std::string Form::getName()const{
    return this->_name;
}

bool Form::getSign()const{
    return this->_signed;
}

int Form::getGradeSign()const{
    return this->_sign_grade;
}

int Form::getExecSign()const{
    return this->_exec_grade;
}


void Form::beSigned(const Bureaucrat& b){
    try{
        if (b.getGrade() <= this->_sign_grade)
        {
            this->_signed = true;
        }
        else
            throw Form::GradeTooLowException();
    }
    catch (Form::GradeTooLowException& exept)
    {
        std::cout << exept.what() << std::endl;
    }
      b.signForm(*this);
}

std::ostream &operator<<(std::ostream &out, Form const &f)
{
	out     	<< f.getName()
				<< " Form. Grade to sign: "
				<< f.getGradeSign()
				<< ". Grade to execute: "
				<< f.getExecSign()
				<< " Is signed: ";
	if (f.getSign())
		out << "Yes." << std::endl;
	else
		out << "No." << std::endl;
	return (out);
}