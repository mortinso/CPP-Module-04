/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:22 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/05 17:02:11 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain*	brain;

	public:
		// Constructors
		Dog( void );
		Dog( const Dog &dog );

		// Destructor
		~Dog( void );

		// Copy assignment operator
		Dog & operator = ( const Dog &dog );

		// Methods
		virtual void	makeSound( void ) const;
		void	newIdea( const std::string& idea ) const;
		void	shareIdeas( void ) const;
};

#endif
