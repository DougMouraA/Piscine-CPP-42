/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:58:38 by douglas           #+#    #+#             */
/*   Updated: 2023/10/25 17:00:12 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	b("Morgan");

	b.beRepaired(5);
	b.attack("Eric");
	b.takeDamage(3);
	b.attack("Eric");
	b.takeDamage(20);
	b.attack("Eric");
	b.beRepaired(6);
	b.attack("Eric");
}