/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:22 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/04 17:04:12 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal {
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
};

#endif
