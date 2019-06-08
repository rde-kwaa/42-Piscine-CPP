/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:59:06 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 16:22:16 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
   private:
    std::string _name;
    std::string _type;

   public:
    Zombie();
    ~Zombie();

    void setName(std::string);
    void setType(std::string);
    void announce() const;
};

#endif
