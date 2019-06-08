/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:49:24 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 18:21:30 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _n(n) {
    this->_horde = new Zombie[n];
    std::cout << "A horde of " << n << " zombies start running at you." << std::endl;
    for (int i = 0; i < n; i += 1) {
        this->_horde[i].setType("One of the Horde");
        this->_horde[i].setName(this->randomName());
    }
    announce();
    return;
}

ZombieHorde::~ZombieHorde() {
    std::cout << "The horde has fallen." << std::endl;
}

std::string ZombieHorde::randomName() const {
    int random = rand() % 10;
    std::string nameList[] = {"Jank", "Gladice", "Zambia", "Phazor", "Gertrude", "Saulo", "Karlstoy", "Tunay", "Meatloaf", "Thirsty"};
    return (nameList[random]);
}

void ZombieHorde::announce() const {
    for (int i = 0; i < _n; i++) {
        this->_horde[i].announce();
    }
}
