/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 19:42:43 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 20:30:22 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
   private:
    std::string _name;
    Weapon &_weapon;

   public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack() const;
};

#endif
