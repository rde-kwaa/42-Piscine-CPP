/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 19:30:05 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/07 06:28:09 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

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

    Fixed& operator=(Fixed const& rhs);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream& o, Fixed const& i);

#endif
