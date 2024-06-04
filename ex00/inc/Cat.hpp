/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:19 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/04 15:46:20 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>

class Cat {
	private:

	public:
 		// Constructors
		Cat( void );
		Cat( const Cat &cat );

  		// Destructor
		~Cat( void );

		// Copy assignment operator
		Cat & operator = ( const Cat &cat );

		// Getter

		// Setter

  		// Methods
};

#endif
