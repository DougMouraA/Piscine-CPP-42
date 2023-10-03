/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:02:43 by douglas           #+#    #+#             */
/*   Updated: 2023/08/28 12:17:16 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    this.numContacts = 0;
}

Contact PhoneBook::getContact(int index){
    if (index >= 0 && index < numContacts){
        return contacts[index];
    }
}

int PhoneBook::getNumContacts(){
    return numContacts;
}

void PhoneBook::addContact(){
    std::string input;
    Contact newContact;

    std::string input;
    std::cout << "Enter your first name: ";
    getline(std::cin, input);
    newContact.setName(input);

    std::string input;
    std::cout << "Enter your last name: ";
    getline(std::cin, input);
    newContact.setLastName(input);

    std::string input;
    std::cout << "Enter your nickname: ";
    getline(std::cin, input);
    newContact.setNick(input);

    std::string input;
    std::cout << "Enter your phone number: ";
    getline(std::cin, input);
    newContact.setPhone(input);

    std::string input;
    std::cout << "Enter your darkest secret: ";
    getline(std::cin, input);
    newContact.setSecret(input);

    if (this.numContacts < 8){
        contacts[this.numContacts] = newContact;
        this.numContacts++;
    }else {
        contact[this.numContacts % 8] = newContact;
        this.numContacts++;
    }
}

void searchContact()
{
    
}
