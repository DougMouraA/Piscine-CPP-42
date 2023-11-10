/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:19:36 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 21:09:19 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const &copy) : Animal(copy){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &copy){
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Miau Miau Miau" << std::endl;
}
