/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 19:42:45 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 20:31:35 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) { return; }

HumanB::~HumanB() { return; }

void HumanB::attack() const {
    std::cout << this->_name << " attacks with his " << this->_weapon->getType()
              << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
}
