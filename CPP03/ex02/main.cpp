/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:23:50 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 23:00:06 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main() {
	std::cout << std::endl << "----- TESTE ClapTrap -----" << std::endl;	
	
    ClapTrap clapTrap("Marron");
    
	clapTrap.attack("Five");
	clapTrap.takeDamage(9);
	clapTrap.beRepaired(1);
	clapTrap.takeDamage(1);
	clapTrap.takeDamage(1);
	clapTrap.takeDamage(1);

	std::cout << std::endl << "----- TESTE ScavTrap -----" << std::endl;	
	
    ScavTrap scavTrap("Lady");

	scavTrap.attack("Gaga");
	scavTrap.takeDamage(99);
	scavTrap.beRepaired(1);
	scavTrap.takeDamage(1);
	scavTrap.guardGate();
	scavTrap.takeDamage(1);
	scavTrap.takeDamage(1);

    std::cout << std::endl << "----- TESTE FragTrap -----" << std::endl;

    FragTrap fragTrap("Five");
    fragTrap.attack("Marron");
	fragTrap.takeDamage(99);
	fragTrap.beRepaired(1);
	fragTrap.takeDamage(1);
	fragTrap.highFivesGuy();
	fragTrap.takeDamage(1);
	fragTrap.takeDamage(1);

	std::cout << std::endl;

	return 0;
}
