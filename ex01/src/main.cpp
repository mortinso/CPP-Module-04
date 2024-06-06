/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:56 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/06 18:02:24 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

int main() {
	{	// Test an array of animals.
		// To check that it creates the right number of members: Comment the other tests and run `./brainiacs | grep <class_name>`
		std::cout << INVERT << "Array of animals:" << RESET << std::endl;
		int				size = 6;
		const Animal*	animals[size];

		// Add half dogs and half cats to the animals array
		for (int i = 0; i < (size / 2); i++)
			animals[i] = new Dog();
		for (int i = (size / 2); i < size; i++)
			animals[i] = new Cat();
		std::cout << std::endl;

		// All animals make sound
		for (int i = 0; i < size; i++)
			animals[i]->makeSound();

		std::cout << std::endl;
		for (int i = 0; i < size; i++)
			delete animals[i];
	}
	{	// Test that ideas are overwritten when the brain is full
		std::cout << std::endl << std::endl << INVERT << "Ideas overwrite:" << RESET << std::endl;
		const Animal* cat = new Cat();

		// Add 100 ideas to cat
		for (int i = 0; i < 100; i++)
			cat->newIdea("Eureka!");
		cat->shareIdeas();

		std::cout << std::endl;
		// Add 3 extra ideas to cat to check that it doesn't segfault
		for (int i = 0; i < 3; i++)
			cat->newIdea("New Eureka!");
		cat->shareIdeas();

		delete cat;
		std::cout << std::endl << std::endl;
	}
	{	// Check that animal has no brain, and therefore can't have ideas
		std::cout << std::endl << std::endl << INVERT << "Animal ideas:" << RESET << std::endl;
		const Animal* animal = new Animal();

		animal->newIdea("Eureka!");
		animal->shareIdeas();

		delete animal;
	}
	{	// Check if making deep copies
		std::cout << std::endl << std::endl << INVERT << "Deep copy:" << RESET << std::endl;
		Dog dog;

		// Add ideas to dog
		for (int i = 0; i < 3; i++)
			dog.newIdea("Treats");

		{	// Copy assignment operator clone
			std::cout << std::endl << "\e[1;4;97mCopy assignment operator:" << RESET << std::endl;
			Dog clone;
			clone = dog;
			clone.shareIdeas();
		}
		{	// Copy constructor clone
			std::cout << std::endl << "\e[1;4;97mCopy constructor:" << RESET << std::endl;
			Dog clone(dog);
			clone.shareIdeas();
		}

		std::cout << std::endl << "\e[1;4;97mBase brain:" << RESET << std::endl;
		dog.shareIdeas();
	}
	return 0;
}