/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:31:29 by douglas           #+#    #+#             */
/*   Updated: 2023/10/20 14:36:07 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    std::cout << "Debug:" << std::endl;
    harl.complain("DEBUG");
    std::cout << "Info:" << std::endl;
    harl.complain("INFO");
    std::cout << "Warning:" << std::endl;
    harl.complain("WARNING");
    std::cout << "Error:" << std::endl;
    harl.complain("ERROR");
    std::cout << "Invalid:" << std::endl;
    harl.complain("INVALID");
    return (0);
}