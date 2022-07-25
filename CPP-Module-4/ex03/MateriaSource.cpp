
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "Materiasource constructor" << std::endl;
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (materias[i])
            delete materias[i];
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    *this = src;
}

MateriaSource& MateriaSource::operator=( MateriaSource const & rhs )
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
            materias[i] = rhs.materias[i];
    }
    return *this;
}

AMateria* MateriaSource::getMateria( std::string const & type )
{
    for (int i = 0; i < 4; i++)
        if (materias[i] && materias[i]->getType() == type)
            return materias[i];
    return NULL;
}

void    MateriaSource::learnMateria( AMateria* m )
{
    for (int i = 0; i < 4; i++)
    {
        if (materias[i] == NULL)
        {
            materias[i] = m;
            std::cout << "MateriaSource learned " << materias[i]->getType() << std::endl;
            return;
        }
    }
}

AMateria*   MateriaSource::createMateria( std::string const& type ) {
    for ( int i = 0; i < 4; i++ )
        if ( materias[i] && materias[i]->getType() == type )
        {
            std::cout << type << " MateriaSource created "  << std::endl;
            return materias[i]->clone();
        }
    std::cout  << type << " unknown type" << std::endl;
    return NULL;
}