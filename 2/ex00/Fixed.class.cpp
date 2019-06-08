/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:28:47 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/07 07:11:09 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

// Constructor Methods
Fixed::Fixed(void) : _n(0) {
    std::cout << "Default Constructor called" << std::endl;
    return;
}
Fixed::Fixed(int const n) : _n(n) {
    std::cout << "Parametric Constructor called" << std::endl;
    return;
}
Fixed::Fixed(Fixed const& src) {
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
    return;
}
Fixed::~Fixed(void) {
    std::cout << "Desconstructor called" << std::endl;
    return;
}

// Assignment Operator
Fixed& Fixed::operator=(Fixed const& rhs) {
    std::cout << "Assignment Operator called" << std::endl;

    if (this != &rhs)
        this->_n = rhs.getRawBits();
    return *this;
}

// Accessors and Mutators for stored bits for instance
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits memeber function called" << std::endl;
    return this->_n;
}
void Fixed::setRawBits(int const raw) {
    this->_n = raw;
}

// Insertion Operator
std::ostream& operator<<(std::ostream& o, Fixed const& i) {
    o << "The value of _n is: " << i.getRawBits();
    return o;
}
