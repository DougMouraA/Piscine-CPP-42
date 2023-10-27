/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:57:30 by douglas           #+#    #+#             */
/*   Updated: 2023/10/27 14:51:17 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &copy){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &copy){
    std::cout << "Animal assignation operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

void Animal::makeSound() const{
    std::cout << "Animal makeSound called" << std::endl;
}

void Animal::setType(std::string nameAnimal){
    this->type = nameAnimal;
}

std::string Animal::getType() const{
    return this->type;
}

