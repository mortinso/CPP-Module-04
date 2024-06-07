/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:30 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/07 13:10:17 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

// Default constructor
Cat::Cat( void ) : AAnimal() {
	std::cout << "Cat default constructor called" <<std::endl;
	brain = new Brain();
}

// Copy constructor
Cat::Cat( const Cat &cat ) : AAnimal( cat ) {
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*cat.brain);
}

// Destructor
Cat::~Cat( void ) {
	delete brain;
	std::cout << "Cat destructor called" <<std::endl;
}

// Copy assignment operator overload
Cat& Cat::operator = ( const Cat &cat ) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &cat)
	{
		type = cat.type;
		delete brain;
		brain = new Brain(*cat.brain);
	}
	return (*this);
}

// -----------------------------------Methods-----------------------------------
void	Cat::makeSound( void ) const {
	std::cout << "Meow" << std::endl;
}

void	Cat::newIdea( const std::string& idea ) const {
	brain->addIdea(idea);
}

void	Cat::shareIdeas( void ) const {
	brain->showIdeas();
}