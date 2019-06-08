/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:07:38 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/08 12:41:34 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "FragTrap.hpp"

int main(void) {
    FragTrap subject_one;
    FragTrap subject_two("Claptrap");
    FragTrap subject_alsotwo;

    subject_one.rangedAttack("Lilith");
    subject_two.meleeAttack("Lilith");
    subject_alsotwo.takeDamage(70);
    subject_alsotwo.takeDamage(60);
    subject_two.magneticMeditation();
    subject_alsotwo.defragment();

    subject_alsotwo.vaulthunter_dot_exe("Roland");
    subject_alsotwo.vaulthunter_dot_exe("Handsome Jack");
    subject_alsotwo.vaulthunter_dot_exe("Zero");

    return (0);
}
