/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:18:24 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/05 14:07:22 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal( void ) {
	std::cout << "WrongAnimal default constructor called" <<std::endl;
}

// Copy constructor
WrongAnimal::WrongAnimal( const WrongAnimal &wronganimal ) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = wronganimal;
}

// Destructor
WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor called" <<std::endl;
}

// Copy assignment operator overload
WrongAnimal&	WrongAnimal::operator = ( const WrongAnimal &wrong_animal ) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &wrong_animal)
		type = wrong_animal.type;
	return (*this);
}

// -----------------------------------Getters-----------------------------------
std::string	WrongAnimal::getType( void ) const {
	return type;
}

// -----------------------------------Methods-----------------------------------
void	WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal sounds" << std::endl;
}