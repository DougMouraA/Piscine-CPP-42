/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:55:59 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 21:18:46 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	std::cout << "----- Constructors -----" << std::endl;
	const Animal *meta = new Animal();
	const Animal *i = new Cat();
	const Animal *j = new Dog();
	std::cout << std::endl;

	std::cout << "----- Class methods -----" << std::endl;
	std::cout << meta->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	std::cout << std::endl;

	std::cout << "----- Constructors -----" << std::endl;
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongI = new WrongCat();
	std::cout << std::endl;

	std::cout << "----- Class methods -----" << std::endl;
	std::cout << wrongMeta->getType() << std::endl;
	std::cout << wrongI->getType() << std::endl;
	wrongMeta->makeSound();
	wrongI->makeSound();
	std::cout << std::endl;

	std::cout << "----- Destructors -----" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongI;

	return 0;
}