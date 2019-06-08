/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:33:42 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/06 18:39:26 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const& target) {
    std::cout << "Melee Attack: Cleaves off " << target << "'s arm" << std::endl;
    return;
}
void Human::rangedAttack(std::string const& target) {
    std::cout << "Ranged Attack: " << target << " takes arrow to the knee" << std::endl;
    return;
}
void Human::intimidatingShout(std::string const& target) {
    std::cout << "Intimidating Shout: Strikes fear into " << target << "'s very soul" << std::endl;
    return;
}

void Human::action(std::string const& action_name, std::string const& target) {
    const std::string actions[] = {"melee", "ranged", "shout"};

    void (Human::*pArr[3])(std::string const& target) = {
        &Human::meleeAttack,
        &Human::rangedAttack,
        &Human::intimidatingShout};

    for (int i = 0; i < 3; i++) {
        if (actions[i].compare(action_name) == 0)
            (this->*pArr[i])(target);
    }

    return;
}
