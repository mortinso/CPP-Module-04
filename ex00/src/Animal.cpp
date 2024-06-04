/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:26 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/04 15:46:28 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Default constructor called" <<std::endl;
}

Animal::Animal( const Animal &animal ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal( void ) {
	std::cout << "Destructor called" <<std::endl;
}

Animal& Animal::operator = ( const Animal &animal ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &animal) {
		// this->setValue(animal.getValue());
	}
	return (*this);
}
