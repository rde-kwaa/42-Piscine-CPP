/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:07:17 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/08 12:20:19 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _name("Fragtrap"),
                           _hp(100),
                           _maxHP(100),
                           _energy(100),
                           _maxEnergy(100),
                           _level(1),
                           _meleeDamage(30),
                           _rangedDamage(20),
                           _damageReduction(5) {
    std::cout << this->_name << ": Wait... What? I'm Alive! Wheeeee!" << std::endl
              << "I am the OG OP master!" << std::endl;
    return;
}
FragTrap::FragTrap(std::string const name) : _name(name),
                                             _hp(100),
                                             _maxHP(100),
                                             _energy(100),
                                             _maxEnergy(100),
                                             _level(1),
                                             _meleeDamage(30),
                                             _rangedDamage(20),
                                             _damageReduction(5) {
    std::cout << this->_name << ": Wait... What? I'm Alive! Wheeeee!" << std::endl
              << "You can't just program this level of excitement!\n"
              << std::endl;
    return;
}
FragTrap::FragTrap(FragTrap const& src) {
    *this = src;
    return;
}
FragTrap::~FragTrap(void) {
    std::cout << this->_name << ": Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
    return;
}

//Assignment Operator
FragTrap& FragTrap::operator=(FragTrap const& rhs) {
    this->_name = rhs._name;
    this->_hp = rhs._hp;
    this->_maxHP = rhs._maxHP;
    this->_energy = rhs._energy;
    this->_maxEnergy = rhs._maxEnergy;
    this->_level = rhs._level;
    this->_meleeDamage = rhs._meleeDamage;
    this->_rangedDamage = rhs._rangedDamage;
    this->_damageReduction = rhs._damageReduction;
    return *this;
}

// FR4G-TP Functions
void FragTrap::rangedAttack(std::string const& target) {
    std::cout << "FR4G-TP " << this->_name << " attacks " << target
              << " at range, causing " << this->_rangedDamage
              << " points of damage!" << std::endl;
}
void FragTrap::meleeAttack(std::string const& target) {
    std::cout << this->_name << ": Shwing!" << std::endl;
    std::cout << "FR4G-TP " << this->_name << " smacks " << target
              << ", causing " << this->_meleeDamage
              << " points of damage!\n"
              << std::endl;
}
void FragTrap::takeDamage(unsigned int amount) {
    (amount < this->_damageReduction) ? amount = 0 : amount -= this->_damageReduction;
    if (amount >= this->_hp)
        this->_hp = 0;
    else
        this->_hp = amount;
    if (this->_hp == 0)
        std::cout << this->_name << " is down." << std::endl;
    std::cout << "FR4G-TP " << this->_name << " takes "
              << amount << " points of damage!"
              << std::endl;
    std::cout
        << this->_name << ": Why do I even feel pain?!\n"
        << std::endl;
}
void FragTrap::beRepaired(unsigned int amount) {
    ((this->_hp + amount) >= this->_maxHP) ? this->_hp = this->_maxHP : this->_hp += amount;

    (this->_hp == this->_maxHP) ? std::cout << "FR4G-TP " << this->_name << " is "
                                            << "at MAX hit points!" << std::endl
                                : (std::cout << "FR4G-TP " << this->_name << " regains "
                                             << amount << " hit points!" << std::endl);
    std::cout << this->_name << ": Health! Eww, what flavor is red?\n"
              << std::endl;
}

// FR4G-TP Attack and Healing Functions
void FragTrap::_deathTornado(std::string const& target) {
    std::cout << this->_name << ": I am a tornado of death and bullets! (*20 machine guns appear*)" << std::endl;
    this->rangedAttack(target);
}
void FragTrap::_dontPanic(std::string const& target) {
    std::cout << this->_name << " pulls out his towel..." << std::endl;
    this->meleeAttack(target);
}
void FragTrap::_hotPotato(std::string const& target) {
    std::cout << this->_name << " pulls out a potato bomb..." << std::endl;
    this->rangedAttack(target);
}
void FragTrap::_freezyPeezy(std::string const& target) {
    std::cout << this->_name << ": Take a chill pill! (*shoots ice rocket*)" << std::endl;
    this->rangedAttack(target);
}
void FragTrap::_icyJab(std::string const& target) {
    std::cout << this->_name << ": Aww! Now I want a snow cone. (*stabs with ice spear*)" << std::endl;
    this->meleeAttack(target);
}
void FragTrap::defragment() {
    unsigned int amount = 25;
    ((this->_energy + amount) >= this->_maxEnergy)
        ? this->_energy = this->_maxEnergy
        : this->_energy += amount;
    std::cout << "FR4G-TP " << this->_name << " energy levels go up by "
              << amount << "!"
              << std::endl;
    std::cout << this->_name << ": If I had veins, they'd be popping out right now!\n"
              << std::endl;
}
void FragTrap::magneticMeditation() {
    this->beRepaired(50);
}

void FragTrap::vaulthunter_dot_exe(std::string const& target) {
    srand(time(NULL));
    void (FragTrap::*attacks[5])(std::string const& target) =
        {
            &FragTrap::_deathTornado,
            &FragTrap::_dontPanic,
            &FragTrap::_hotPotato,
            &FragTrap::_freezyPeezy,
            &FragTrap::_icyJab};

    int energy = (int)this->_energy - 25;

    if (energy >= 0) {
        this->_energy -= 25;
        int attack = rand() % 5;
        (this->*attacks[attack])(target);
    } else
        std::cout << this->_name << ": I'm outta juice!" << std::endl;

    std::cout << this->_name << "'s Energy Levels are now at "
              << this->_energy << std::endl;
}

std::string FragTrap::getHP() const {
    std::string s;
    int hp = this->_hp;
    s = (hp);
    return s;
}

// Insertion Operator
std::ostream& operator<<(std::ostream& o, FragTrap const& i) {
    o << "HP is at: " << i.getHP();
    return o;
}
