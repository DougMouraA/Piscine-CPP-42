/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:23:50 by douglas           #+#    #+#             */
/*   Updated: 2023/10/26 10:30:01 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap	c("Pietro");

	c.beRepaired(5);
	c.beRepaired(10);
	c.attack("Eric");
	c.takeDamage(3);
	c.highFivesGuys();
}