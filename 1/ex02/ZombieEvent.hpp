/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:59:09 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 18:20:20 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
   private:
    std::string _type;

   public:
    ZombieEvent();
    ~ZombieEvent();
    Zombie *newZombie(std::string name);
    void setZombieType(std::string type);
    Zombie *randomChump();
};

#endif
