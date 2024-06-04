/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:18:28 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/04 16:18:29 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat( void ) {
	std::cout << "Default constructor called" <<std::endl;
}

WrongCat::WrongCat( const WrongCat &wrongcat ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = wrongcat;
}

WrongCat::~WrongCat( void ) {
	std::cout << "Destructor called" <<std::endl;
}

WrongCat& WrongCat::operator = ( const WrongCat &wrongcat ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &wrongcat) {
		// this->setValue(wrongcat.getValue());
	}
	return (*this);
}
