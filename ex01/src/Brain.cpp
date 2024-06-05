/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:12:23 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/05 15:12:24 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

// Default constructor
Brain::Brain( void ) {
	std::cout << "Brain default constructor called" <<std::endl;
}

// Copy constructor
Brain::Brain( const Brain &brain ) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = brain;
}

// Destructor
Brain::~Brain( void ) {
	std::cout << "Brain destructor called" <<std::endl;
}

// Copy assignment operator overload
Brain& Brain::operator = ( const Brain &brain ) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &brain)
		*this = brain;
	return (*this);
}

// -----------------------------------Getters-----------------------------------

// -----------------------------------Setters-----------------------------------

// -----------------------------------Methods-----------------------------------
