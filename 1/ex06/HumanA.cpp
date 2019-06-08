/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 19:42:40 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 20:31:28 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
    return;
}

HumanA::~HumanA() { return; }

void HumanA::attack() const {
    std::cout << this->_name << " attacks with his " << this->_weapon.getType()
              << std::endl;
}
