/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:56 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/12 13:24:34 by mortins-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main() {
	{
		std::cout << INVERT << "Suject tests:" << RESET << std::endl;
		const Animal* animal = new Animal();
		if (!animal)
		{
			std::cout << "animal creation failed" << std::endl;
			return 1;
		}
		const Animal* cat = new Cat();
		if (!cat)
		{
			std::cout << "cat creation failed" << std::endl;
			return 1;
		}
		const Animal* dog = new Dog();
		if (!dog)
		{
			std::cout << "dog creation failed" << std::endl;
			return 1;
		}

		std::cout << std::endl;
		std::cout << "animal type: " << animal->getType() << std::endl;
		std::cout << "cat type: " << cat->getType() << std::endl;
		std::cout << "dog type: " << dog->getType() << std::endl << std::endl;

		animal->makeSound(); //will output the Animal sound
		cat->makeSound(); //will output the Cat sound
		dog->makeSound(); //will output the Dog sound
		std::cout << std::endl;

		delete dog;
		delete cat;
		delete animal;
	}
	{
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
			delete wrong_animal;
			return 1;
		}

		std::cout << std::endl;
		std::cout << "wrong_animal type: " << wrong_animal->getType() << std::endl;
		std::cout << "wrong_cat type: " << wrong_cat->getType() << std::endl << std::endl;

		wrong_animal->makeSound(); //will output the WrongAnimal sound
		wrong_cat->makeSound(); //will output the WrongAnimal sound
		std::cout << std::endl;

		delete wrong_cat;
		delete wrong_animal;
	}
}