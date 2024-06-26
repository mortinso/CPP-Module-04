/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:34 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/12 13:16:53 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

// Default constructor
Dog::Dog( void ) : Animal() {
	std::cout << "Dog default constructor called" <<std::endl;
	brain = new Brain();
}

// Copy constructor
Dog::Dog( const Dog &dog ) : Animal(dog) {
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*dog.brain);
}

// Destructor
Dog::~Dog( void ) {
	std::cout << "Dog destructor called" <<std::endl;
	delete brain;
}

// Copy assignment operator overload
Dog& Dog::operator = ( const Dog &dog ) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &dog)
	{
		type = dog.type;
		delete brain;
		brain = new Brain(*dog.brain);
	}
	return (*this);
}

// -----------------------------------Methods-----------------------------------
void	Dog::makeSound( void ) const {
	std::cout << "Bark" << std::endl;
}

void	Dog::newIdea( const std::string& idea ) const {
	brain->addIdea(idea);
}

void	Dog::shareIdeas( void ) const {
	brain->showIdeas();
}