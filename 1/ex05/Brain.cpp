/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:34:58 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 18:39:21 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { return; }

Brain::~Brain() { return; }

std::string Brain::identify() const {
    std::stringstream s;
    s << this;
    return (s.str());
}
