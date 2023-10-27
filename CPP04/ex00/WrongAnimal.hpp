/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:45:53 by douglas           #+#    #+#             */
/*   Updated: 2023/10/26 17:54:26 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        virtual ~WrongAnimal();

        WrongAnimal &operator=(const WrongAnimal &copy);

        void makeSound() const;
        
        void setType(std::string nameAnimal);
        std::string getType() const;
};

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(WrongCat const &copy);
        ~WrongCat();

        WrongCat &operator=(WrongCat const &copy);

        void makeSound() const;
};

#endif