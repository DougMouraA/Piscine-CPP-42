/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:24:42 by douglas           #+#    #+#             */
/*   Updated: 2023/08/16 17:13:16 by douglas          ###   ########.fr       */
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
        void addContact();
        void searchContact();
        void displayContacts();
        Contact getContact(int index);
        int getNumContacts();
};

#endif