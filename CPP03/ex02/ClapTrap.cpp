/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:52:15 by douglas           #+#    #+#             */
/*   Updated: 2023/10/26 10:03:18 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->setName("ClapTrap");
    this->setAttackDamage(10);
    this->setEnergyPoints(10);
    this->setHitPoints(0);
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->setName(name);
    this->setAttackDamage(10);
    this->setEnergyPoints(10);
    this->setHitPoints(0);
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
    this->setName(copy.name);
    this->setAttackDamage(copy.attackDamage);
    this->setEnergyPoints(copy.energyPoints);
    this->setHitPoints(copy.hitPoints);
    return (*this);
}

void ClapTrap::attack(std::string const & target)
{
    if (this->getEnergyPoints() && this->getHitPoints())
    {
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        std::cout << "ClapTrap " << this->getName() << " attack " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->getName() << " can't attack " << target << ", because it's dead!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->getHitPoints() > 0)
    {
        this->setHitPoints(this->getHitPoints() - amount);
        std::cout << "ClapTrap " << this->getName() << " take " << amount << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->getName() << " can't take damage, because it's dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
   if (this->getEnergyPoints() > 0)
    {
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        this->setHitPoints(this->getHitPoints() + amount);
        std::cout << "ClapTrap " << this->getName() << " be repaired " << amount << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->getName() << " can't be repaired, because it's dead!" << std::endl;
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setHitPoints(int hitPoints)
{
    this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
    this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
    this->attackDamage = attackDamage;
}

std::string ClapTrap::getName()
{
    return this->name;
}

int ClapTrap::getHitPoints()
{
    return this->hitPoints;
}

int ClapTrap::getEnergyPoints()
{
    return this->energyPoints;
}

int ClapTrap::getAttackDamage()
{
    return this->attackDamage;
}
