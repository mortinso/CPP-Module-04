/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:18:20 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/04 16:18:22 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>

class WrongCat {
	private:

	public:
 		// Constructors
		WrongCat( void );
		WrongCat( const WrongCat &wrongcat );

  		// Destructor
		~WrongCat( void );

		// Copy assignment operator
		WrongCat & operator = ( const WrongCat &wrongcat );

		// Getter

		// Setter

  		// Methods
};

#endif
