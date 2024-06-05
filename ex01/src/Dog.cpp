/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:34 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/05 15:08:49 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Default constructor
Dog::Dog( void ) {
	std::cout << "Dog default constructor called" <<std::endl;
	brain = new Brain();
	type = "Dog";
}

// Copy constructor
Dog::Dog( const Dog &dog ) {
	std::cout << "Dog copy constructor called" << std::endl;
	std::cout << RED << "Not sure if this is deep copy" << RESET << std::endl;
	*this = dog;
}

// Destructor
Dog::~Dog( void ) {
	delete brain;
	std::cout << "Dog destructor called" <<std::endl;
}

// Copy assignment operator overload
Dog& Dog::operator = ( const Dog &dog ) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &dog)
	{
		type = dog.type;
		*brain = *dog.brain;
	}
	return (*this);
}

// -----------------------------------Methods-----------------------------------
void	Dog::makeSound( void ) const {
	std::cout << "Bark" << std::endl;
}