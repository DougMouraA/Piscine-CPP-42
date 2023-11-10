/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:06:30 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 21:07:40 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"


class Dog : public Animal {
    public:
        Dog();
        Dog(Dog const &copy);
        ~Dog();

        Dog &operator=(Dog const &copy);
        
        virtual void makeSound() const;
};

#endif