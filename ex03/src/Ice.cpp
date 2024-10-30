/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:34:22 by mortins-          #+#    #+#             */
/*   Updated: 2024/10/30 09:43:11 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

// Default constructor
Ice::Ice( void ) {
	// std::cout << "Ice default constructor called" <<std::endl;
}

// Copy constructor
Ice::Ice( const Ice &_ice ) {
	// std::cout << "Ice copy constructor called" << std::endl;
	*this = _ice;
}

// Destructor
Ice::~Ice( void ) {
	// std::cout << "Ice destructor called" <<std::endl;
}

// -----------------------------------Operators---------------------------------
// Copy assignment operator overload
Ice& Ice::operator = ( const Ice &_ice ) {
	// std::cout << "Ice copy assignment operator called" << std::endl;
	if (this != &_ice) {
		*this = _ice;
	}
	return (*this);
}

// -----------------------------------Methods-----------------------------------
AMateria*	Ice::clone( void ) const {
	Ice *ice = new Ice();

	return (ice);
}

void	Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
