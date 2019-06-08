/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 05:31:53 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/07 15:01:54 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>

/*
* Constructor Methods
*/
// Default Constructor
Fixed::Fixed(void) : _n(0) { return; }
// Copy Constructor
Fixed::Fixed(Fixed const& src) {
    *this = src;
    return;
}
// Int Constructor
Fixed::Fixed(int const n) : _n(n << this->_fb) { return; }
// Float Constructor
Fixed::Fixed(float const n) : _n(roundf(n * (1 << this->_fb))) { return; }
// Deconstructor
Fixed::~Fixed(void) { return; }

// Assignment Operator
Fixed& Fixed::operator=(Fixed const& rhs) {
    this->_n = rhs.getRawBits();
    return *this;
}

// Comparitive Operators (Returns boolean)
bool Fixed::operator>(Fixed const& rhs) const {
    return (_n > rhs.getRawBits());
}
bool Fixed::operator<(Fixed const& rhs) const {
    return (_n < rhs.getRawBits());
}
bool Fixed::operator>=(Fixed const& rhs) const {
    return (_n >= rhs.getRawBits());
}
bool Fixed::operator<=(Fixed const& rhs) const {
    return (_n <= rhs.getRawBits());
}
bool Fixed::operator==(Fixed const& rhs) const {
    return (_n == rhs.getRawBits());
}
bool Fixed::operator!=(Fixed const& rhs) const {
    return (_n != rhs.getRawBits());
}

// Arithmetic Operators
Fixed Fixed::operator+(Fixed const& rhs) const {
    return (this->_n + rhs.getRawBits()) / SCALAR;
}
Fixed Fixed::operator-(Fixed const& rhs) const {
    return (this->_n - rhs.getRawBits()) / SCALAR;
}
Fixed Fixed::operator*(Fixed const& rhs) const {
    return (this->toFloat() * (float)rhs.getRawBits() / SCALAR);
}
Fixed Fixed::operator/(Fixed const& rhs) const {
    return (this->toFloat() / (float)rhs.getRawBits());
}

// Incremental and Decremental Operators
Fixed& Fixed::operator++() {
    ++(this->_n);
    return (*this);
}
Fixed& Fixed::operator--() {
    --(this->_n);
    return (*this);
}
Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    operator++();
    return (temp);
}
Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    operator--();
    return (temp);
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
    return this->_n / (float)SCALAR;
}
int Fixed::toInt(void) const {
    return this->_n / (1 << this->_fb);
}

// Min Max Comparison
Fixed& min(Fixed& x, Fixed& y) {
    return (x >= y ? x : y);
}
Fixed& max(Fixed& x, Fixed& y) {
    return (x <= y ? x : y);
}
Fixed const& Fixed::min(Fixed const& x, Fixed const& y) {
    return (x <= y ? x : y);
}
Fixed const& Fixed::max(Fixed const& x, Fixed const& y) {
    return (x >= y ? x : y);
}

// Insertion Operator
std::ostream& operator<<(std::ostream& o, Fixed const& i) {
    o << i.toFloat();
    return o;
}
