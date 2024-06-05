/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:30 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/05 15:07:41 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// Default constructor
Cat::Cat( void ){
	std::cout << "Cat default constructor called" <<std::endl;
	brain = new Brain();
	type = "Cat";
}

// Copy constructor
Cat::Cat( const Cat &cat ) {
	std::cout << "Cat copy constructor called" << std::endl;
	std::cout << RED << "Not sure if this is deep copy" << RESET << std::endl;
	*this = cat;
}

// Destructor
Cat::~Cat( void ) {
	delete brain;
	std::cout << "Cat destructor called" <<std::endl;
}

// Copy assignment operator overload
Cat& Cat::operator = ( const Cat &cat ) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &cat)
	{
		type = cat.type;
		*brain = *cat.brain;
	}
	return (*this);
}

// -----------------------------------Methods-----------------------------------
void	Cat::makeSound( void ) const {
	std::cout << "Meow" << std::endl;
}