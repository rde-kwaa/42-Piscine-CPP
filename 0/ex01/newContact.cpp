/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:50:00 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/04 17:42:00 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact newContact() {
    Contact contact;
    std::string in;

    std::cout << "Firs name pls: ";
    getline(std::cin, in);
    contact.setFirstName(in);
    std::cout << "Lats nem plez: ";
    getline(std::cin, in);
    contact.setLastName(in);
    std::cout << "Friend nahm: ";
    getline(std::cin, in);
    contact.setNickname(in);
    std::cout << "Gimme ya webname ya dengis: ";
    getline(std::cin, in);
    contact.setLogin(in);
    std::cout << "I wanna post you a wedring, postcode now: ";
    getline(std::cin, in);
    contact.setPost(in);
    std::cout << "Emale for spam: ";
    getline(std::cin, in);
    contact.setEmail(in);
    std::cout << "Whats ya dijats: ";
    getline(std::cin, in);
    contact.setPhone(in);
    std::cout << "Barfday spleaz?: ";
    getline(std::cin, in);
    contact.setBirthday(in);
    std::cout << "Wat does your belly desire: ";
    getline(std::cin, in);
    contact.setFavouriteMeal(in);
    std::cout << "Whats you're butts fav volour: ";
    getline(std::cin, in);
    contact.setUnderwearColour(in);
    std::cout << "Gimme a dark sekret: ";
    getline(std::cin, in);
    contact.setDarkestSecret(in);

    std::cout << std::endl
              << "I stole ya info! Tx" << std::endl;

    return contact;
}
