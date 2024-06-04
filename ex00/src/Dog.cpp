/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:34 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/04 15:46:36 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Default constructor called" <<std::endl;
}

Dog::Dog( const Dog &dog ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = dog;
}

Dog::~Dog( void ) {
	std::cout << "Destructor called" <<std::endl;
}

Dog& Dog::operator = ( const Dog &dog ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &dog) {
		// this->setValue(dog.getValue());
	}
	return (*this);
}
