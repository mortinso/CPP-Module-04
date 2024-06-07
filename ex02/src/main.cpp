/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:56 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/07 16:36:29 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/AAnimal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main() {
	{	/* Test an array of animals to check that the right constructors/destructors are called
		Also used to check proper construction/destruction chaining */
		std::cout << INVERT << "Animal array test:" << RESET << std::endl;
		const AAnimal*	aanimals[6];

		// Add half dogs and half cats to the animals array
		for (int i = 0; i < 6; i++)
		{
			if (i < 3)
			{
				aanimals[i] = new Dog();
				if (!aanimals[i])
				{
					std::cout << "dog creation failed" << std::endl;
					while (i > 0)
						delete aanimals[--i];
					return 1;
				}
			}
			else
			{
				aanimals[i] = new Cat();
				if (!aanimals[i])
				{
					std::cout << "cat creation failed" << std::endl;
					while (i > 0)
						delete aanimals[--i];
					return 1;
				}
			}
		}
		std::cout << std::endl;

		// All animals make sound
		for (int i = 0; i < 6; i++)
			aanimals[i]->makeSound();

		std::cout << std::endl;
		// All animals are deleted
		for (int i = 0; i < 6; i++)
			delete aanimals[i];
	}
	{	// Test that the program doesn't crash when you add more than 100 ideas
		std::cout << std::endl << std::endl << INVERT << "Ideas overwrite:" << RESET << std::endl;
		const AAnimal* cat = new Cat();

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
	{	// Check if making deep copies
		std::cout << std::endl << std::endl << INVERT << "Deep copy:" << RESET << std::endl;
		Cat cat;
		Dog dog;

		// Add ideas to cat and dog
		for (int i = 0; i < 3; i++)
		{
			cat.newIdea("Pets");
			dog.newIdea("Treats");
		}

		{	// Copy assignment operator clone
			std::cout << std::endl << "\e[1;4;97mCopy assignment operator:" << RESET << std::endl;
			Cat c_clone;
			Dog d_clone;
			c_clone = cat;
			d_clone = dog;
			c_clone.shareIdeas();
			d_clone.shareIdeas();
		}
		{	// Copy constructor clone
			std::cout << std::endl << "\e[1;4;97mCopy constructor:" << RESET << std::endl;
			Cat c_clone(cat);
			Dog d_clone(dog);
			c_clone.shareIdeas();
			d_clone.shareIdeas();
		}

		// If base cat and dog still have ideas, then the program is making deep copies
		std::cout << std::endl << "\e[1;4;97mBase brain:" << RESET << std::endl;
		cat.shareIdeas();
		dog.shareIdeas();
	}
	{	// WrongCat test copied from ex00
		std::cout << std::endl << std::endl << INVERT << "WrongCat test:" << RESET << std::endl;
		const WrongAnimal* wrong_animal = new WrongAnimal();
		if (!wrong_animal)
		{
			std::cout << "wrong_animal creation failed" << std::endl;
			return 1;
		}
		const WrongAnimal* wrong_cat = new WrongCat();
		if (!wrong_cat)
		{
			std::cout << "wrong_cat creation failed" << std::endl;
			return 1;
		}

		std::cout << std::endl;
		std::cout << "wrong_animal type: " << wrong_animal->getType() << std::endl;
		std::cout << "wrong_cat type: " << wrong_cat->getType() << std::endl << std::endl;

		wrong_cat->makeSound(); //will output the WrongAnimal sound
		wrong_animal->makeSound(); //will output the WrongAnimal sound
		std::cout << std::endl;

		delete wrong_cat;
		delete wrong_animal;
	}
	/* {	// Try to instantiate Animal Class and see that it errors
		AAnimal		basic(); // error: invalid abstract return type 'AAnimal'
		AAnimal*	p_basic = new AAnimal(); // error: invalid new-expression of abstract class type
	} */
	return 0;
}