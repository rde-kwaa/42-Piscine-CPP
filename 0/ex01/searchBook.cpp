/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchBook.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:13:32 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 09:28:21 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int getContact(Contact brulebook[], int contactCount) {
    int index;
    std::string s;

    std::cout << "Want some deets? Gimme a number: ";
    getline(std::cin, s);
    std::cout << std::endl;
    try {
        index = std::stoi(s);
    } catch (const std::invalid_argument& ia) {
        std::cerr << "Your number ain't legit.." << std::endl;
    } catch (const std::out_of_range& oor) {
        std::cerr << "That's one big number!" << std::endl;
    }

    if ((index >= 0 && index < contactCount)) {
        std::cout << brulebook[index].getFirstName() << std::endl;
        std::cout << brulebook[index].getLastName() << std::endl;
        std::cout << brulebook[index].getNickname() << std::endl;
        std::cout << brulebook[index].getLogin() << std::endl;
        std::cout << brulebook[index].getPost() << std::endl;
        std::cout << brulebook[index].getEmail() << std::endl;
        std::cout << brulebook[index].getPhone() << std::endl;
        std::cout << brulebook[index].getBirthday() << std::endl;
        std::cout << brulebook[index].getFavouriteMeal() << std::endl;
        std::cout << brulebook[index].getUnderwearColour() << std::endl;
        std::cout << brulebook[index].getDarkestSecret() << std::endl;
        return 1;
    } else {
        std::cout << "No find, soz!" << std::endl;
        return 0;
    }
}

static std::string trimEnd(std::string s) {
    s.resize(9);
    s.append(".");
    return s;
}

void searchBook(Contact brulebook[], int contactCount) {
    std::string firstname;
    std::string lastname;
    std::string nickname;
    int l = 0;

    //std::cout << std::setw(WIDTH);
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < contactCount; i++) {
        firstname = brulebook[i].getFirstName();
        lastname = brulebook[i].getLastName();
        nickname = brulebook[i].getNickname();

        if (firstname.length() > WIDTH) firstname = trimEnd(firstname);
        if (lastname.length() > WIDTH) lastname = trimEnd(lastname);
        if (nickname.length() > WIDTH) nickname = trimEnd(nickname);

        std::cout << "|" << std::setw(WIDTH) << i;
        std::cout << "|" << std::setw(WIDTH) << firstname;
        std::cout << "|" << std::setw(WIDTH) << lastname;
        std::cout << "|" << std::setw(WIDTH) << nickname << "|" << std::endl;
    }
    while (!l) {
        l = getContact(brulebook, contactCount);
        std::cout << std::endl;
    }
}
