/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:31:56 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/06 17:32:54 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include <string>

class Human {
   private:
    void meleeAttack(std::string const& target);
    void rangedAttack(std::string const& target);
    void intimidatingShout(std::string const& target);

   public:
    void action(std::string const& action_name, std::string const& target);
};

#endif
