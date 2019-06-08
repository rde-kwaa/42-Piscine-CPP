/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:07:42 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/08 12:08:04 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include <string>

class FragTrap {
   private:
    std::string _name;
    unsigned int _hp,
        _maxHP,
        _energy,
        _maxEnergy,
        _level,
        _meleeDamage,
        _rangedDamage,
        _damageReduction;

    void _deathTornado(std::string const& target);
    void _dontPanic(std::string const& target);
    void _hotPotato(std::string const& target);
    void _freezyPeezy(std::string const& target);
    void _icyJab(std::string const& target);

   public:
    FragTrap(void);
    FragTrap(std::string const name);
    FragTrap(FragTrap const& src);
    ~FragTrap(void);

    FragTrap& operator=(FragTrap const& rhs);

    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void vaulthunter_dot_exe(std::string const& target);
    void defragment();
    void magneticMeditation();

    std::string getHP() const;
};

std::ostream& operator<<(std::ostream& o, FragTrap const& i);

#endif
