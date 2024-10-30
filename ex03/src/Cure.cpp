#include "../inc/Cure.hpp"

// Default constructor
Cure::Cure( void ) {
	std::cout << "Cure default constructor called" <<std::endl;
}

// Copy constructor
Cure::Cure( const Cure &_cure ) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = _cure;
}

// Destructor
Cure::~Cure( void ) {
	std::cout << "Cure destructor called" <<std::endl;
}

// -----------------------------------Operators---------------------------------
// Copy assignment operator overload
Cure& Cure::operator = ( const Cure &_cure ) {
	std::cout << "Cure copy assignment operator called" << std::endl;
	if (this != &_cure) {
		*this = _cure;
	}
	return (*this);
}

// -----------------------------------Methods-----------------------------------
AMateria*	Cure::clone( void ) const {
	Cure *cure = new Cure();

	return (cure);
}

void	Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}