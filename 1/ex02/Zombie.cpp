/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:59:05 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 14:12:16 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
    std::cout << "A new Zombie appears." << std::endl;
    announce();
}
Zombie::~Zombie() {
    std::cout << "Zombie " << this->_name << ", the "
              << this->_type << " is now dead" << std::endl;
}

void Zombie::announce() const {
    std::cout << "<" << this->_name << " (" << this->_type
              << ")> Braiiiiiiinnnssss..." << std::endl;
}
