/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:22 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/04 15:46:24 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>

class Dog {
	private:

	public:
 		// Constructors
		Dog( void );
		Dog( const Dog &dog );

  		// Destructor
		~Dog( void );

		// Copy assignment operator
		Dog & operator = ( const Dog &dog );

		// Getter

		// Setter

  		// Methods
};

#endif
