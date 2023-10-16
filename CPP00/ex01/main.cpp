/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 09:09:08 by douglas           #+#    #+#             */
/*   Updated: 2023/10/16 10:06:03 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main(void){
    PhoneBook phoneBook;
    std::string input;

    while (1){
        std::cout << "Enter a command: ";
        getline(std::cin, input);
        if (input.empty())
            break;
        else {
            if (input == "ADD"){
                phoneBook.addContact();
            }else if (input == "SEARCH"){
                phoneBook.displayContacts();
                phoneBook.searchContact();
            }else if (input == "EXIT"){
                break;
            }else {
                std::cout << "Invalid command" << std::endl;
            }
        }
    }
    std::cout << "Bye bye!" << std::endl;
    return 0;
}