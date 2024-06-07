/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:02:09 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/05 14:03:54 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		// Constructors
		WrongCat( void );
		WrongCat( const WrongCat &wrongcat );

		// Destructor
		~WrongCat( void );

		// Copy assignment operator overload
		WrongCat & operator = ( const WrongCat &wrongcat );

		// Methods
		void	makeSound( void ) const;
};

#endif
