/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:55:53 by douglas           #+#    #+#             */
/*   Updated: 2023/08/02 10:03:13 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int i = 1;
        while (argv[i])
        {
            std::string str = std::string(argv[i]);
            size_t j = 0;
            while(j < str.length())
            {
                std::cout << (char)std::toupper(str[j]);
                j++;
            }
            i++;
        }
        std::cout<<std::endl;
    }
    else
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    return (0);
}