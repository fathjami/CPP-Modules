
#include "Intern.hpp"

#include <iostream>

int	main( void )
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

	delete rrf;
	return 0;
}
