/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:15:09 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 21:40:59 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void) {
	std::cout << "----- Constructors -----" << std::endl;
	Animal *animal[10];
	for (int i = 0; i < 10; i++) {
		if (i < 5)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}
	
	std::cout << "----- Class Methods -----" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << animal[i]->getType() << std::endl; 

	std::cout << "----- Destructors -----" << std::endl;
	for (int i = 0; i < 10; i++)
		delete animal[i];

	return 0;
}