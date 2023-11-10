/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:58:38 by douglas           #+#    #+#             */
/*   Updated: 2023/11/09 21:57:04 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap fulaninho("Fulaninho");
	ClapTrap ciclaninho(fulaninho);
	ClapTrap alguem;
	alguem = fulaninho;

	std::cout << std::endl << "----- TESTE NAME CONSTRUCTOR -----" << std::endl;	
	
	for (int i = 0; i < 9; i++)
		fulaninho.attack("Ciclaninho");
	fulaninho.takeDamage(9);
	fulaninho.beRepaired(1);
	fulaninho.takeDamage(1);
	fulaninho.beRepaired(1);
	fulaninho.takeDamage(1);
	fulaninho.takeDamage(1);

	std::cout << std::endl << "----- TESTE COPY CONSTRUCTOR -----" << std::endl;	
	
	for (int i = 0; i < 9; i++)
		ciclaninho.attack("Alguem");
	ciclaninho.takeDamage(9);
	ciclaninho.beRepaired(1);
	ciclaninho.takeDamage(1);
	ciclaninho.beRepaired(1);
	ciclaninho.takeDamage(1);
	ciclaninho.takeDamage(1);

	std::cout << std::endl << "----- TESTE DEFAULT CONSTRUCTOR + COPY OPERATOR -----" << std::endl;

	for (int i = 0; i < 9; i++)
		alguem.attack("Individuo");
	alguem.takeDamage(9);
	alguem.beRepaired(1);
	alguem.takeDamage(1);
	alguem.beRepaired(1);
	alguem.takeDamage(1);
	alguem.takeDamage(1);
	std::cout << std::endl;
	
	return 0;
}
