/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:30 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/04 17:02:04 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// Default constructor
Cat::Cat( void ){
	std::cout << "Cat default constructor called" <<std::endl;
	type = "Cat";
}

// Copy constructor
Cat::Cat( const Cat &cat ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

// Destructor
Cat::~Cat( void ) {
	std::cout << "Cat destructor called" <<std::endl;
}

// Copy assignment operator overload
Cat& Cat::operator = ( const Cat &cat ) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &cat)
		Animal::operator=(cat);
	return (*this);
}

// -----------------------------------Methods-----------------------------------
void	Cat::makeSound( void ) const {
	std::cout << "Meow" << std::endl;
}