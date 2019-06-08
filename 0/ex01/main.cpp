/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 23:58:53 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 09:13:57 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int main() {
    std::string arg;
    Contact brulebook[MAX_ENTREES];
    int16_t index = 0;

    std::cout << "\nDr Steve Brule's Famous 80s Fonebook\n"
              << std::endl;
    std::cout << "ADD -> Add a cool friend" << std::endl;
    std::cout << "SEARCH -> Search a cool friend" << std::endl;
    std::cout << "EXIT -> Leave the book\n"
              << std::endl;

    while (arg.compare("EXIT") != 0) {
        std::cout << "What say you: ";
        getline(std::cin, arg);
        if (arg == "ADD") {
            if (index < MAX_ENTREES)
                brulebook[index++] = newContact();
            else
                std::cout << "I'M A CHOCOLA BLOCK FULL!!" << std::endl;
        } else if (arg == "SEARCH") {
            if (index > 0)
                searchBook(brulebook, index);
            else
                std::cout << "Balls! No friends in the Brulebook" << std::endl;
        }
    }
    return 0;
}
