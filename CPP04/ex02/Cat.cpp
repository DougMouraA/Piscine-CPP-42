/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:19:36 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 21:46:59 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(){
    this->brain = new Brain();
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy){
    *this = copy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(){
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &copy){
    this->brain = new Brain(*copy.brain);
    this->type = copy.type;
    std::cout << "Cat assignation operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Meow Meow Meow" << std::endl;
}
