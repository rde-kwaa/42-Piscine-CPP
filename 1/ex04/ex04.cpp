/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:21:00 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 18:22:52 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string s = "HI THIS IS BRAIN";

    std::string *p = &s;
    // r can be seen as an alias for s, as refs are always derefed when called.
    std::string &r = s;

    std::cout << "Pointer: " << *p << std::endl;
    std::cout << "Ref: " << r << std::endl;
    return 0;
}
