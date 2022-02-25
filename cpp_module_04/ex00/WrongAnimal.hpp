#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class WrongAnimal
{
	public:

		WrongAnimal( void );
		WrongAnimal( WrongAnimal const & src );

		~WrongAnimal( void );

		WrongAnimal &		operator=( WrongAnimal const & rhs );

		std::string const	getType( void ) const;
		void		makeSound( void ) const;

	protected:

		std::string		_type;
};

#endif //~~ WRONGANIMAL_H
