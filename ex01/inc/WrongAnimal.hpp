/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:18:16 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/07 14:29:53 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	protected:
		std::string	type;

	public:
		// Constructors
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &wrong_animal );

		// Destructor
		~WrongAnimal( void );

		// Copy assignment operator
		WrongAnimal&	operator=( const WrongAnimal &wrong_animal );

		// Getter
		std::string	getType( void ) const;

		// Methods
		void	makeSound( void ) const;
};

#endif
