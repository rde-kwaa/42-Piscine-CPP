/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 19:42:46 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 20:28:25 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB {
   private:
    std::string _name;
    Weapon *_weapon;

   public:
    HumanB(std::string);
    ~HumanB();
    void attack() const;
    void setWeapon(Weapon &weapon);
};

#endif
