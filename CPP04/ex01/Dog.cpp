/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:20:39 by douglas           #+#    #+#             */
/*   Updated: 2023/10/27 15:14:10 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog(){
    this->brain = new Brain();
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy){
    *this = copy;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(){
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &copy){
    this->brain = new Brain(*copy.brain);
    this->type = copy.type;
    std::cout << "Dog assignation operator called" << std::endl;
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Au Au Au" << std::endl;
}
