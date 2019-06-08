/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:59:05 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 16:24:54 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "A new Zombie appears." << std::endl;
}
Zombie::~Zombie() {
    std::cout << "Zombie " << this->_name << ", the "
              << this->_type << " is now dead" << std::endl;
}
void Zombie::setName(std::string s){
    this->_name = s;
}
void Zombie::setType(std::string s){
    this->_type = s;
}
void Zombie::announce() const {
    std::cout << "<" << this->_name << " (" << this->_type
              << ")> Braiiiiiiinnnssss..." << std::endl;
}
