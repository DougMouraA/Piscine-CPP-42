/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:16:05 by douglas           #+#    #+#             */
/*   Updated: 2023/10/26 09:49:31 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	c("Pietro");

	c.beRepaired(5);
	c.beRepaired(10);
	c.attack("Eric");
	c.takeDamage(3);
	c.attack("Eric");
	c.takeDamage(20);
	c.attack("Eric");
	c.beRepaired(6);
	c.attack("Eric");
	c.guardGate();
}