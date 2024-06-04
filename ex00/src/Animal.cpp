/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:26 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/04 16:51:42 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

// Default constructor
Animal::Animal( void ) {
	std::cout << "Animal default constructor called" <<std::endl;
}

// Copy constructor
Animal::Animal( const Animal &animal ) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

// Destructor
Animal::~Animal( void ) {
	std::cout << "Animal destructor called" <<std::endl;
}

// Copy assignment operator overload
Animal&	Animal::operator = ( const Animal &animal ) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &animal)
		type = animal.type;
	return (*this);
}

// -----------------------------------Getters-----------------------------------
std::string	Animal::getType( void ) const {
	return type;
}

// -----------------------------------Methods-----------------------------------
void	Animal::makeSound( void ) const {
	std::cout << "Animal sounds" << std::endl;
}