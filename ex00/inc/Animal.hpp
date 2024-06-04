/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:12 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/04 15:46:15 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	private:

	public:
 		// Constructors
		Animal( void );
		Animal( const Animal &animal );

  		// Destructor
		~Animal( void );

		// Copy assignment operator
		Animal & operator = ( const Animal &animal );

		// Getter

		// Setter

  		// Methods
};

#endif
