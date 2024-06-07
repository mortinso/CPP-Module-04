/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:26 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/07 13:08:45 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

// Default constructor
AAnimal::AAnimal( void ) {
	std::cout << "AAnimal default constructor called" <<std::endl;
}

// Copy constructor
AAnimal::AAnimal( const AAnimal &aanimal ) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = aanimal;
}

// Destructor
AAnimal::~AAnimal( void ) {
	std::cout << "AAnimal destructor called" <<std::endl;
}

// Copy assignment operator overload
AAnimal&	AAnimal::operator = ( const AAnimal &aanimal ) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &aanimal)
		type = aanimal.type;
	return (*this);
}

// -----------------------------------Getters-----------------------------------
std::string	AAnimal::getType( void ) const {
	return type;
}
