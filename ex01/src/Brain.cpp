/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:12:23 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/12 13:13:34 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

// Default constructor
Brain::Brain( void ) : last_idea(0) {
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
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = brain.ideas[i];
		last_idea = brain.last_idea;
	}
	return (*this);
}

// -----------------------------------Methods-----------------------------------
// Function that adds a new idea to the ideas array
void	Brain::addIdea( const std::string idea) {
	if (!idea[0])
	{
		std::cout << RED << "Idea must not be empty" << RESET << std::endl;
		return ;
	}
	if ( last_idea == 100)
		last_idea = 0;
	ideas[last_idea] = idea;
	last_idea++;
}

// Function that prints all ideas to std::cout
void	Brain::showIdeas( void ) {
	if (!ideas[0][0])
	{
		std::cout << "Nothing to share." << std::endl;
		return ;
	}
	for (int i = 0; (i < 100) && (ideas[i][0]) ; i++)
		std::cout << ideas[i] << std::endl;
}