/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:46:11 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/06 18:40:06 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main() {
    Human fighter;

    fighter.action("shout", "Mudcrab");
    fighter.action("melee", "harpee");
    fighter.action("ranged", "goblin");

    return 0;
}
