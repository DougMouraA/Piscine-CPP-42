/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:51:25 by douglas           #+#    #+#             */
/*   Updated: 2023/10/27 15:16:36 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &copy);
        virtual ~Animal();

        Animal &operator=(const Animal &copy);

        virtual void makeSound() const;
        
        void setType(std::string nameAnimal);
        std::string getType() const;
};

class Cat : public Animal {
    private:
        Brain *brain;
    public:
        Cat();
        Cat(Cat const &copy);
        ~Cat();

        Cat &operator=(Cat const &copy);

        virtual void makeSound() const;        
};

class Dog : public Animal {
    private:
        Brain *brain;
    public:
        Dog();
        Dog(Dog const &copy);
        ~Dog();

        Dog &operator=(Dog const &copy);
        
        virtual void makeSound() const;
};

#endif