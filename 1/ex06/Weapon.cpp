/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 19:42:50 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 20:27:41 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) { return; }

Weapon::~Weapon() { return; }

const std::string Weapon::getType() const {
    return (this->_type);
}

void Weapon::setType(std::string type) {
    this->_type = type;
}
