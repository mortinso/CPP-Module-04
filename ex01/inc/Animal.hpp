/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:12 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/07 15:11:11 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define RED "\e[91m"
# define GREEN "\e[92m"
# define YELLOW "\e[93m"
# define INVERT "\e[90m\e[107m"
# define RESET "\e[0m"

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
		std::string	getType( void ) const;

		// Methods
		virtual void	makeSound( void ) const;
};

#endif
