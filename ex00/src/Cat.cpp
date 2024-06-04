/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:30 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/04 15:46:32 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Default constructor called" <<std::endl;
}

Cat::Cat( const Cat &cat ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat( void ) {
	std::cout << "Destructor called" <<std::endl;
}

Cat& Cat::operator = ( const Cat &cat ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &cat) {
		// this->setValue(cat.getValue());
	}
	return (*this);
}
