/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:26:15 by douglas           #+#    #+#             */
/*   Updated: 2023/10/11 09:21:19 by douglas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getName(){
    return name;
}

std::string Contact::getLastName(){
    return lastName;
}

std::string Contact::getNick(){
    return nick;
}

std::string Contact::getPhone(){
    return phone;
}

std::string Contact::getSecret(){
    return secret;
}

void Contact::setName(std::string name){
    this->name = name;
}

void Contact::setLastName(std::string lastName){
    this->lastName = lastName;
}

void Contact::setNick(std::string nick){
    this->nick = nick;
}

void Contact::setPhone(std::string phone){
    this->phone = phone;
}

void Contact::setSecret(std::string secret){
    this->secret = secret;
}