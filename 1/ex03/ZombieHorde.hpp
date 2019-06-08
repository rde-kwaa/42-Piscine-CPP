/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:48:48 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 18:21:20 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde {
   private:
    int const _n;
    Zombie *_horde;

   public:
    ZombieHorde(int);
    ~ZombieHorde();
    std::string randomName() const;
    void announce() const;
};

#endif
