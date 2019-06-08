/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:43:22 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 18:17:41 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony() {
    std::cout << "You gave birth to a Pony " << std::endl;
}
Pony::~Pony() {
    std::cout << "Your pony " << this->_name << " is now dead" << std::endl;
}

void Pony::setName(std::string s) {
    this->_name = s;
    return;
}

void Pony::setGender(std::string s) {
    this->_gender = s;
    return;
}

void Pony::setCoatColour(std::string s) {
    this->_coatcolor = s;
    return;
}

void Pony::setCoatPattern(std::string s) {
    this->_coatpattern = s;
    return;
}

void Pony::setHands(std::string s) {
    this->_hands = s;
    return;
}

void Pony::setAge(std::string s) {
    this->_age = s;
    return;
}

std::string Pony::getName() const {
    return (this->_name);
}

std::string Pony::getGender() const {
    return (this->_gender);
}

std::string Pony::getCoatColour() const {
    return (this->_coatcolor);
}

std::string Pony::getCoatPattern() const {
    return (this->_coatpattern);
}

std::string Pony::getHands() const {
    return (this->_hands);
}

std::string Pony::getAge() const {
    return (this->_age);
}

void Pony::neigh() const {
    std::cout << std::endl
              << "AAAAAHHHHHHH!!!!!!" << std::endl;
}
