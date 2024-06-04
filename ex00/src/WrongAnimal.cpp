/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:18:24 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/04 16:18:26 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "Default constructor called" <<std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &wronganimal ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = wronganimal;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Destructor called" <<std::endl;
}

WrongAnimal& WrongAnimal::operator = ( const WrongAnimal &wronganimal ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &wronganimal) {
		// this->setValue(wronganimal.getValue());
	}
	return (*this);
}
