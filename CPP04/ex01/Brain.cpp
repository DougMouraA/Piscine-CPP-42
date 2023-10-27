/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:06:33 by douglas           #+#    #+#             */
/*   Updated: 2023/10/27 15:09:51 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &copy){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &copy){
    std::cout << "Brain assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
    return *this;
}