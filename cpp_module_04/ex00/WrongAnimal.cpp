#include "WrongAnimal.hpp"

//~~ CONSTRUCTOR

WrongAnimal::WrongAnimal( void )
{
	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	(void)src;
	return;
}

//~~ DESTRUCTOR

WrongAnimal::~WrongAnimal( void )
{
	return;
}

//~~ OVERLOAD

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	(void)rhs;
	return ( *this );
}

//~~ ACCESSOR

std::string const	WrongAnimal::getType( void ) const
{
	return ( _type );
}

//~~ METHODS

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "What am I?" << std::endl;
	return;
}
