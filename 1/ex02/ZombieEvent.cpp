/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:59:07 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 18:20:18 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
    std::cout << "A Zombie event has began." << std::endl;
}

ZombieEvent::~ZombieEvent() {
    std::cout << "The event is at an end." << std::endl;
}

Zombie *ZombieEvent::newZombie(std::string name) {
    return (new Zombie(name, this->_type));
}

void ZombieEvent::setZombieType(std::string ztype) {
    this->_type = ztype;
}

Zombie *ZombieEvent::randomChump() {
    Zombie *zambie;
    int random = rand() % 8;
    std::string nameList[] = {"Jank", "Phazor", "Gertrude", "Saulo", "Karlstoy", "Tunay", "Meatloaf", "Thirsty"};
    zambie = newZombie(nameList[random]);
    return (zambie);
}
