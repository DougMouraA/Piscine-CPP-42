/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:22:10 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 22:59:39 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->name = "defaultName";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap name constructor called" << std::endl;	
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &fragTrap) : ClapTrap(fragTrap) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = fragTrap;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &fragTrap) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->name = fragTrap.name;
	this->hitPoints = fragTrap.hitPoints;
	this->energyPoints = fragTrap.energyPoints;
	this->attackDamage = fragTrap.attackDamage;
	return *this;	
}

void FragTrap::attack(const std::string& target) {
	if (!this->hitPoints) {
		std::cout << this->name << " is dead already!" << std::endl;
		return;
	}
	else if (!this->energyPoints) {
		std::cout << this->name << "'s energy points are empty!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;

	this->energyPoints--;
}

void FragTrap::highFivesGuy(void) {
	std::cout << "FragTrap " << this->name << " is asking for a high five!" << std::endl;	
}
