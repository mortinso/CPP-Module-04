/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:56 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/05 17:03:58 by mortins-         ###   ########.fr       */
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
		std::cout << INVERT << "Ideas overlap:" << RESET << std::endl;
		const Animal* cat = new Cat();

		for (int i = 0; i < 100; i++)
			cat->newIdea("Eureka!");
		cat->shareIdeas();
		std::cout << "More ideas!" << std::endl;
		for (int i = 0; i < 3; i++)
			cat->newIdea("New Eureka!");
		cat->shareIdeas();
		delete cat;
	}
	// test animal brain
	// check if deep copy
	// add more tests
}