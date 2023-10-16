/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:49:09 by douglas           #+#    #+#             */
/*   Updated: 2023/10/11 09:47:57 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <iomanip>

class Contact 
{
    private:
        std::string name;
        std::string lastName;
        std::string nick;
        std::string phone;
        std::string secret;
        
    public:
        std::string getName();
        std::string getLastName();
        std::string getNick();
        std::string getPhone();
        std::string getSecret();
    
        void setName(std::string name);
        void setLastName(std::string lastName);
        void setNick(std::string nick);
        void setPhone(std::string phone);
        void setSecret(std::string secret);     
};

#endif