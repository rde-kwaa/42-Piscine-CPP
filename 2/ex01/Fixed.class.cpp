/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 19:30:06 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/07 09:02:22 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

// Constructor Methods
Fixed::Fixed(void) : _n(0) {
    std::cout << "Default Constructor called" << std::endl;
    return;
}
Fixed::Fixed(Fixed const& src) {
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}
Fixed::Fixed(int const n) : _n(n * (1 << this->_fb)) {
    std::cout << "Int Constructor called" << std::endl;
}
Fixed::Fixed(float const n) : _n(roundf(n * (1 << this->_fb))) {
    std::cout << "Float Constructor called" << std::endl;
}
Fixed::~Fixed(void) {
    std::cout << "Desconstructor called" << std::endl;
}

// Assignment Operator
Fixed& Fixed::operator=(Fixed const& rhs) {
    std::cout << "Assignment Operator called" << std::endl;
    this->_n = rhs.getRawBits();
    return *this;
}

// Accessors and Mutators for stored bits for instance
int Fixed::getRawBits(void) const {
    return this->_n;
}
void Fixed::setRawBits(int const raw) {
    this->_n = raw;
}

// Conversions
float Fixed::toFloat(void) const {
    return this->_n / (float)(1 << this->_fb);
}
int Fixed::toInt(void) const {
    return this->_n / (1 << this->_fb);
}

// Insertion Operator
std::ostream& operator<<(std::ostream& o, Fixed const& i) {
    o << i.toFloat();
    return o;
}
