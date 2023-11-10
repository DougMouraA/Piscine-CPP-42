/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:51:59 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 21:18:02 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &copy){
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal makeSound called" << std::endl;
}

void WrongAnimal::setType(std::string nameAnimal){
    this->type = nameAnimal;
}

std::string WrongAnimal::getType() const{
    return this->type;
}

