/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:52:15 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 22:44:21 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->energyPoints  = 10;
    this->hitPoints     = 10;
    this->attackDamage  = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->name          = name;
    this->energyPoints  = 10;
    this->hitPoints     = 10;
    this->attackDamage  = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->name          = copy.name;
    this->energyPoints  = copy.energyPoints;
    this->hitPoints     = copy.hitPoints;
    this->attackDamage  = copy.attackDamage;
    return (*this);
}

void ClapTrap::attack(std::string const & target)
{
    if (!this->hitPoints)
    {
        std::cout << this->name << " is dead" << std::endl;
        return;
    }
    else if (!this->energyPoints)
    {
        std::cout << this->name << " has no energy" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->hitPoints)
    {
		std::cout << this->name << " is dead" << std::endl;
		return;
	}
	else if (this->hitPoints <= amount)
    {
		this->hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage and died!" << std::endl;
        return;
	}
	std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage!" << std::endl;
	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
   if (!this->energyPoints)
   {
        std::cout << "ClapTrap " << this->name << " has no energy" << std::endl;
        return;
   }
   std::cout << "ClapTrap " << this->name << " be repaired " << amount << " points of energy!" << std::endl;
    this->hitPoints += amount;
    this->energyPoints--;
}
