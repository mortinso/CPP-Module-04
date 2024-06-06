/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortins- <mortins-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:46:56 by mortins-          #+#    #+#             */
/*   Updated: 2024/06/06 14:16:40 by mortins-         ###   ########.fr       */
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
		const Animal* cat = new Cat();
		Animal* newcat = new Cat();
		const Animal* dog = new Dog();

		*newcat = *cat;
		std::cout << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		std::cout << newcat->getType() << " " << std::endl;
		std::cout << dog->getType() << " " << std::endl << std::endl;

		newcat->makeSound(); //will output the cat sound!
		cat->makeSound(); //will output the cat sound!
		dog->makeSound(); //will output the dog sound!
		animal->makeSound(); //will output the animal sound!
		std::cout << std::endl;

		delete dog;
		delete newcat;
		delete cat;
		delete animal;
	}
	
	std::cout << std::endl << std::endl;
	{
		std::cout << INVERT << "Test with WrongCat:" << RESET << std::endl;
		const WrongAnimal* wrong_animal = new WrongAnimal();
		const WrongAnimal* wrong_cat = new WrongCat();

		std::cout << std::endl;
		std::cout << wrong_cat->getType() << " " << std::endl << std::endl;

		wrong_cat->makeSound(); //will output the wronganimal sound!
		wrong_animal->makeSound(); //will output the wronganimal sound!
		std::cout << std::endl;

		delete wrong_cat;
		delete wrong_animal;
	}
}