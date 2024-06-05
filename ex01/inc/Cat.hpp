/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:19 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/05 16:46:49 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain*	brain;

	public:
		// Constructors
		Cat( void );
		Cat( const Cat &cat );

		// Destructor
		~Cat( void );

		// Copy assignment operator
		Cat & operator = ( const Cat &cat );

		// Methods
		void	makeSound( void ) const;
		void	newIdea( const std::string& idea ) const;
		void	shareIdeas( void ) const;
};

#endif
