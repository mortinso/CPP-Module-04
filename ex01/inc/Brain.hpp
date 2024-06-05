/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:12:27 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/05 15:12:30 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define RED "\e[91m"
# define GREEN "\e[92m"
# define YELLOW "\e[93m"
# define BLUE "\e[94m"
# define PURPLE "\e[95m"
# define CYAN "\e[96m"
# define INVERT "\e[90m\e[107m"
# define RESET "\e[0m"

class Brain {
	private:
		std::string	ideas[100];

	public:
		// Constructors
		Brain( void );
		Brain( const Brain &brain );

		// Destructor
		~Brain( void );

		// Copy assignment operator overload
		Brain & operator = ( const Brain &brain );

		// Getters

		// Setters

		// Methods
};

#endif
