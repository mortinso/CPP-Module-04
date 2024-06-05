/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:56 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/05 15:41:28 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main() {
	{
		std::cout << INVERT << "Array of animals:" << RESET << std::endl;
		int				size = 6;
		const Animal*	animals[size];

		for (int i = 0; i < (size / 2); i++)
			animals[i] = new Dog();
		for (int i = (size / 2); i < size; i++)
			animals[i] = new Cat();

		// All animals make sound
		for (int i = 0; i < size; i++)
			animals[i]->makeSound();

		for (int i = 0; i < size; i++)
			delete animals[i];
	}
	std::cout << std::endl << std::endl;
	{
	}
}