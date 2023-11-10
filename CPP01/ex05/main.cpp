/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:31:29 by douglas           #+#    #+#             */
/*   Updated: 2023/11/07 19:21:36 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        Harl harl;
        harl.complain(argv[1]);
    }
    else
        std::cout << "Invalid parameters" << std::endl;
    return (0);
}