/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:13:29 by douglas           #+#    #+#             */
/*   Updated: 2023/10/26 09:58:04 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->setName("ScavTrap");
    this->setAttackDamage(100);
    this->setEnergyPoints(50);
    this->setHitPoints(20);
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->setName(name);
    this->setAttackDamage(100);
    this->setEnergyPoints(50);
    this->setHitPoints(20);
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    ClapTrap::operator=(copy);
    return *this;
}

void ScavTrap::attack(std::string const & target)
{
    if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
    {
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        std::cout << "ScavTrap " << this->getName() << " attack " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->getName() << " is out of energy points or hit points!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->getEnergyPoints() > 0)
    {
        this->setHitPoints(this->getHitPoints() + amount);
        if (this->getHitPoints() > 20)
            this->setHitPoints(20);
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        std::cout << "ScavTrap " << this->getName() << " has been repaired by " << amount << " points!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->getName() << " is out of energy points!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << " has enterred in Gate keeper mode" << std::endl;
}

