/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 00:41:05 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 09:08:04 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() { return; }
Contact::~Contact() { return; }

void Contact::setFirstName(std::string s) {
    this->_firstname = s;
    return;
}

void Contact::setLastName(std::string s) {
    this->_lastname = s;
    return;
}

void Contact::setNickname(std::string s) {
    this->_nickname = s;
    return;
}

void Contact::setLogin(std::string s) {
    this->_login = s;
    return;
}

void Contact::setPost(std::string s) {
    this->_post = s;
    return;
}

void Contact::setEmail(std::string s) {
    this->_email = s;
    return;
}

void Contact::setPhone(std::string s) {
    this->_phone = s;
    return;
}

void Contact::setBirthday(std::string s) {
    this->_birthday = s;
    return;
}

void Contact::setFavouriteMeal(std::string s) {
    this->_favouritemeal = s;
    return;
}

void Contact::setUnderwearColour(std::string s) {
    this->_underwearcolour = s;
    return;
}

void Contact::setDarkestSecret(std::string s) {
    this->_darkestsecret = s;
    return;
}

std::string Contact::getFirstName() {
    return (this->_firstname);
}

std::string Contact::getLastName() {
    return (this->_lastname);
}

std::string Contact::getNickname() {
    return (this->_nickname);
}

std::string Contact::getLogin() {
    return (this->_login);
}

std::string Contact::getPost() {
    return (this->_post);
}

std::string Contact::getEmail() {
    return (this->_email);
}

std::string Contact::getPhone() {
    return (this->_phone);
}

std::string Contact::getBirthday() {
    return (this->_birthday);
}

std::string Contact::getFavouriteMeal() {
    return (this->_favouritemeal);
}

std::string Contact::getUnderwearColour() {
    return (this->_underwearcolour);
}

std::string Contact::getDarkestSecret() {
    return (this->_darkestsecret);
}
