/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:59:02 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 14:23:04 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void) {
    ZombieEvent portal = ZombieEvent();
    portal.setZombieType("Merchant");
    Zombie *z0 = portal.newZombie("Flower");
    portal.setZombieType("Plumber");
    Zombie *z1 = portal.newZombie("Harold");
    portal.setZombieType("Joker");
    Zombie *z2 = portal.randomChump();
    portal.setZombieType("Fisherman");
    Zombie *z3 = portal.randomChump();
    portal.setZombieType("Altruist");
    Zombie *z4 = portal.randomChump();
    portal.setZombieType("Farmer");
    Zombie *z5 = portal.randomChump();

    delete z0;
    delete z1;
    delete z2;
    delete z3;
    delete z4;
    delete z5;

    return (0);
}
