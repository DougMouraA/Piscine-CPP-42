/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:15:09 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 21:50:14 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
	std::cout << "----- Constructors -----" << std::endl;
	//Animal *animal = new Animal();
	Animal *dog = new Dog();
	Animal *cat = new Cat();

	std::cout << std::endl << "----- Methods -----" << std::endl;
	//animal->makeSoud();
	dog->makeSound();
	cat->makeSound();
	
	std::cout << std::endl << "----- Destructors -----" << std::endl;
	delete dog;
	delete cat;

	return 0;
}