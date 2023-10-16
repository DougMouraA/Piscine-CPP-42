/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:02:43 by douglas           #+#    #+#             */
/*   Updated: 2023/10/16 16:12:44 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    this->numContacts = 0;
}

Contact PhoneBook::getContact(int index){
    if (index >= 0 && index < numContacts){
        return contact[index];
    }
    else
        return Contact();
}

int PhoneBook::getNumContacts(){
    return numContacts;
}

Contact PhoneBook::error(){
    Contact error;
    std::cout << "A saved contact cant have empty fields." << std::endl;
    error.setName("");
    std::cin.clear();
    return error;
}

Contact PhoneBook::addContact(){
    std::string input;
    Contact newContact;

    std::cout << "Enter your first name: ";
    getline(std::cin, input);
    if (input.empty())
        return this->error();
    newContact.setName(input);

    std::cout << "Enter your last name: ";
    getline(std::cin, input);
    if (input.empty())
        return this->error();
    newContact.setLastName(input);

    std::cout << "Enter your nickname: ";
    getline(std::cin, input);
    if (input.empty())
        return this->error();
    newContact.setNick(input);

    std::cout << "Enter your phone number: ";
    getline(std::cin, input);
    if (input.empty())
        return this->error();
    newContact.setPhone(input);

    std::cout << "Enter your darkest secret: ";
    getline(std::cin, input);
    if (input.empty())
        return this->error();
    newContact.setSecret(input);

    if (this->numContacts < 8){
        contact[this->numContacts] = newContact;
        this->numContacts++;
    }else {
        contact[this->numContacts % 8] = newContact;
        this->numContacts++;
    }
    return newContact;
}

std::string formatString(const std::string& input){
    std::string formatted = input;
    if (formatted.length() > 10){
        formatted.resize(10);
        formatted[9] = '.';
    }
    return formatted;
}

void PhoneBook::displayContacts()
{
    std::cout << std::setw(10) << "Index" << "|" \
    << std::setw(10) << "First Name" << "|" \
    << std::setw(10) << "Last Name" << "|" \
    << std::setw(10) << "Nickname" << "|" << std::endl;

    int p = numContacts;
    if (p > 8)
        p = 8;

    for (int i = 0; i < p; i++) {
        std::cout << std::setw(10) << i + 1 << "|";

        std::string firstName = formatString(contact[i].getName());
        std::cout << std::setw(10) << std::right << firstName << "|";

        std::string lastName = formatString(contact[i].getLastName());
        std::cout << std::setw(10) << std::right << lastName << "|";

        std::string nickName = formatString(contact[i].getNick());
        std::cout << std::setw(10) << std::right << nickName << "|";

        std::cout << std::endl;
    }

}

void PhoneBook::searchContact(){
    std::string input;
    std::cout << "Enter the index of he contact you want to view: ";
    
     if (getline(std::cin, input)) 
     {
        int index;
        if (sscanf(input.c_str(), "%d", &index) == 1 && index >= 1 && index <= numContacts) {
            Contact select = contact[index - 1];
            std::cout << "Contact Information: " << std::endl;
            std::cout << "First Name: " << select.getName() << std::endl;
            std::cout << "Last Name: " << select.getLastName() << std::endl;
            std::cout << "Nickname: " << select.getNick() << std::endl;
            std::cout << "Phone Number: " << select.getPhone() << std::endl;
            std::cout << "Darkest Secret: " << select.getSecret() << std::endl;
            std::cout << std::endl;
        } else {
            std::cout << "Invalid index. Please enter a valid index." << std::endl;
        }
    }
    else 
    {
        std::cin.clear();
       std::cin.ignore(32767, '\n');
    }
}

