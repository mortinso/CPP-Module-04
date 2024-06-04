/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:12 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/04 16:56:06 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	protected:
		std::string	type;

	public:
 		// Constructors
		Animal( void );
		Animal( const Animal &animal );

		// Destructor
		virtual ~Animal( void );

		// Copy assignment operator
		Animal&	operator=( const Animal &animal );

		// Getter
		virtual std::string	getType( void ) const;

		// Methods
		virtual void	makeSound( void ) const;
};

#endif
