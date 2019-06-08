/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 05:31:08 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/07 14:49:04 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP
#define SCALAR (1 << this->_fb)

#include <cmath>
#include <iostream>

class Fixed {
   private:
    int _n;
    static const int _fb = 8;

   public:
    Fixed(void);
    Fixed(Fixed const& src);
    Fixed(int const n);
    Fixed(float const n);
    ~Fixed(void);

    // Assignment Operators
    Fixed& operator=(Fixed const& rhs);

    // Comparitive Operators (Returns boolean)
    bool operator>(Fixed const& rhs) const;
    bool operator<(Fixed const& rhs) const;
    bool operator>=(Fixed const& rhs) const;
    bool operator<=(Fixed const& rhs) const;
    bool operator==(Fixed const& rhs) const;
    bool operator!=(Fixed const& rhs) const;

    // Arithmetic Operators
    Fixed operator+(Fixed const& rhs) const;
    Fixed operator-(Fixed const& rhs) const;
    Fixed operator*(Fixed const& rhs) const;
    Fixed operator/(Fixed const& rhs) const;

    // Incremental and Decremental Operators
    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    // Accessor and Mutator Methods for bits of an instance
    int getRawBits(void) const;
    void setRawBits(int const raw);
    // Conversions
    float toFloat(void) const;
    int toInt(void) const;

    // Min Max Comparison
    static Fixed const& min(Fixed const& x, Fixed const& y);
    static Fixed const& max(Fixed const& x, Fixed const& y);
};
// Non-member functions
Fixed& min(Fixed& x, Fixed& y);
Fixed& max(Fixed& x, Fixed& y);

// Insertion Operator
std::ostream& operator<<(std::ostream& o, Fixed const& i);

#endif
