/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:20:39 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 21:09:30 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const &copy) : Animal(copy){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &copy){
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Au Au Au" << std::endl;
}
