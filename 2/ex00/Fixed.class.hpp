/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:28:49 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/06 16:47:05 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed {
   private:
    int _n;
    static const int _fb = 8;

   public:
    Fixed(void);
    Fixed(int const n);
    Fixed(Fixed const& src);
    ~Fixed(void);

    Fixed& operator=(Fixed const& rhs);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& o, Fixed const& i);

#endif
