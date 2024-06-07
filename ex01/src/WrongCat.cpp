/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:03:05 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/07 14:17:37 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

// Default constructor
WrongCat::WrongCat( void ) : WrongAnimal() {
	std::cout << "WrongCat default constructor called" <<std::endl;
	type = "WrongCat";
}

// Copy constructor
WrongCat::WrongCat( const WrongCat &wrongcat ) : WrongAnimal( wrongcat ) {
	std::cout << "WrongCat copy constructor called" << std::endl;
}

// Destructor
WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destructor called" <<std::endl;
}

// Copy assignment operator overload
WrongCat& WrongCat::operator = ( const WrongCat &wrongcat ) {
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &wrongcat)
		type = wrongcat.type;
	return (*this);
}

// -----------------------------------Methods-----------------------------------
void	WrongCat::makeSound( void ) const {
	std::cout << "Wrong Meow" << std::endl;
}