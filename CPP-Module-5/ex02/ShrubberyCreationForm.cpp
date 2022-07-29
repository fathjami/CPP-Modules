
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : _target(target),Form("shrubberyCreationForm", 145, 137)
{
    // std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src ) :Form(src)
{
    // *this = src;
    // std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const &rhs )
{
    if (this != &rhs) {
        this->Form::operator=(rhs);
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void    ShrubberyCreationForm::execute( Bureaucrat const &executor ) const
{
    // std::cout << "ShrubberyCreationForm execute called" << std::endl;
    
        if (executor.getGrade() > this->getGradeToExecute())
            throw Form::GradeTooLowException();   
                 
    std::ofstream file( this->getTarget() + "_shrubbery" );
    file << "                      ___" << std::endl;
    file << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
    file << "             ,-'          __,,-- \\" << std::endl;
    file << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
    file << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
    file << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
    file << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    file << "     (     ,-'                  `." << std::endl;
    file << "      `._,'     _   _             ;" << std::endl;
    file << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    file << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
    file << "        `--\'   \"Hb  HH  dF\"" << std::endl;
    file << "                \"Hb HH dF" << std::endl;
    file << "                 \"HbHHdF" << std::endl;
    file << "                  |HHHF" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  |HHH|" << std::endl;
    file << "                  dHHHb" << std::endl;
    file << "                .dFd|bHb.               o" << std::endl;
    file << "      o       .dHFdH|HbTHb.          o /" << std::endl;
    file << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    file << "##########################################" << std::endl;

    file.close();
}

std::string ShrubberyCreationForm::getTarget() const{
    return this->_target;
}
