/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:16:05 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 22:27:13 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	std::cout << std::endl << "----- TESTE ClapTrap -----" << std::endl;	
	
    ClapTrap clapTrap("Michael");
    
	clapTrap.attack("Jackson");
	clapTrap.takeDamage(9);
	clapTrap.beRepaired(1);
	clapTrap.takeDamage(1);
	clapTrap.takeDamage(1);
	clapTrap.takeDamage(1);

	std::cout << std::endl << "----- TESTE ScavTrap -----" << std::endl;	
	
    ScavTrap scavTrap("Jackson");

	scavTrap.attack("Five");
	scavTrap.takeDamage(99);
	scavTrap.beRepaired(1);
	scavTrap.takeDamage(1);
	scavTrap.guardGate();
	scavTrap.takeDamage(1);
	scavTrap.takeDamage(1);

	std::cout << std::endl;

	return 0;
}