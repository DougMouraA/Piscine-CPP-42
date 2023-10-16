/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:24:42 by douglas           #+#    #+#             */
/*   Updated: 2023/10/11 11:03:40 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contact[8];
        int     numContacts;
    
    public:
        PhoneBook();
        void searchContact();
        void displayContacts();
        Contact getContact(int index);
        Contact addContact();
        Contact error();
        int getNumContacts();
};

#endif