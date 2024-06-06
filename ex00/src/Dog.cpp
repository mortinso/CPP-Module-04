/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:34 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/06 14:07:11 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Default constructor
Dog::Dog( void ) : Animal() {
	std::cout << "Dog default constructor called" <<std::endl;
	type = "Dog";
}

// Copy constructor
Dog::Dog( const Dog &dog ) : Animal( dog ) {
	std::cout << "Dog copy constructor called" << std::endl;
}

// Destructor
Dog::~Dog( void ) {
	std::cout << "Dog destructor called" <<std::endl;
}

// Copy assignment operator overload
Dog& Dog::operator = ( const Dog &dog ) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &dog)
		Animal::operator=(dog);
	return (*this);
}

// -----------------------------------Methods-----------------------------------
void	Dog::makeSound( void ) const {
	std::cout << "Bark" << std::endl;
}