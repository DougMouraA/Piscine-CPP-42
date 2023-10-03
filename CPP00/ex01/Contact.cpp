/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: douglas <douglas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:26:15 by douglas           #+#    #+#             */
/*   Updated: 2023/08/18 14:26:21 by douglas          ###   ########.fr       */
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

void Contact::setName(set::string name){
    this->name = name;
}

void Contact::setLastName(set::string name){
    this->lastName = lastName;
}

void Contact::setNick(set::string nick){
    this->nick = nick;
}

void Contact::setPhone(set::string phone){
    this->phone = phone;
}

void Contact::setSecret(set::string secret){
    this->secret = secret;
}