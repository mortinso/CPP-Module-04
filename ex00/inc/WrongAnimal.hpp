/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:18:16 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/04 16:18:18 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	private:

	public:
 		// Constructors
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &wronganimal );

  		// Destructor
		~WrongAnimal( void );

		// Copy assignment operator
		WrongAnimal & operator = ( const WrongAnimal &wronganimal );

		// Getter

		// Setter

  		// Methods
};

#endif
