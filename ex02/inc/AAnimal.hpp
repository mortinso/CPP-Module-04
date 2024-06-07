/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:12 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/07 13:49:47 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

# define RED "\e[91m"
# define GREEN "\e[92m"
# define YELLOW "\e[93m"
# define INVERT "\e[90m\e[107m"
# define RESET "\e[0m"

class AAnimal {
	protected:
		std::string	type;

		AAnimal( void );
		AAnimal( const AAnimal &aanimal );

		AAnimal&	operator=( const AAnimal &aanimal );
	public:
		// Destructor
		virtual ~AAnimal( void );
		
		// Getter
		virtual std::string	getType( void ) const;

		// Methods
		virtual void	makeSound( void ) const = 0;
		virtual void	newIdea( const std::string& idea ) const = 0;
		virtual void	shareIdeas( void ) const = 0;
};

#endif
