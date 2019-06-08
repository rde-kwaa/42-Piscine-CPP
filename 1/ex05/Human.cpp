/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:35:00 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 19:39:36 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() { return; }

Human::~Human() { return; }

Brain const &Human::getBrain() {
    return this->_brain;
}

std::string Human::identify() const {
    std::stringstream s;
    s << &(this->_brain);
    return (s.str());
}
