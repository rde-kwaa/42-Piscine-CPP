/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:07:38 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/08 13:02:03 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "FragTrap.hpp"

int main(void) {
    FragTrap bot_1;
    FragTrap bot_2("Flaptrap");
    FragTrap bot_copy_2;
    FragTrap bot_3("Claptrap");

    bot_1.rangedAttack("Lilith");
    bot_2.meleeAttack("Zero");
    bot_copy_2.takeDamage(70);
    bot_copy_2.takeDamage(60);
    bot_2.magneticMeditation();
    bot_2.defragment();

    bot_3.vaulthunter_dot_exe("Roland");
    bot_3.vaulthunter_dot_exe("Handsome Jack");
    bot_3.vaulthunter_dot_exe("Zero");
    bot_3.vaulthunter_dot_exe("Handsome Jack again");
    bot_3.vaulthunter_dot_exe("Lilith");

    return (0);
}
