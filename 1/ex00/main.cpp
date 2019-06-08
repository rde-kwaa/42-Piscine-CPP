/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:37:50 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 10:45:33 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void ponyOnTheHeap() {
    Pony* heaphonie = new Pony();

    heaphonie->setName("Sorrowful Waters");
    heaphonie->setGender("Male");
    heaphonie->setCoatColour("Appaloosa");
    heaphonie->setCoatPattern("Frost");
    heaphonie->setHands("14");
    heaphonie->setAge("8");
    std::cout << "Name: " << heaphonie->getName();
    std::cout << " | Gender: " << heaphonie->getGender();
    std::cout << " | Coat Colour: " << heaphonie->getCoatColour();
    std::cout << " | Coat Pattern: " << heaphonie->getCoatPattern();
    std::cout << " | Hands: " << heaphonie->getHands();
    std::cout << " | Age: " << heaphonie->getAge() << std::endl;

    heaphonie->neigh();

    delete heaphonie;
}

static void ponyOnTheStack() {
    Pony stephonie;

    stephonie.setName("Timeless Bannister");
    stephonie.setGender("Female");
    stephonie.setCoatColour("Grey");
    stephonie.setCoatPattern("Dapple");
    stephonie.setHands("16");
    stephonie.setAge("13");
    std::cout << "Name: " << stephonie.getName();
    std::cout << " | Gender: " << stephonie.getGender();
    std::cout << " | Coat Colour: " << stephonie.getCoatColour();
    std::cout << " | Coat Pattern: " << stephonie.getCoatPattern();
    std::cout << " | Hands: " << stephonie.getHands();
    std::cout << " | Age: " << stephonie.getAge() << std::endl;

    stephonie.neigh();
}

int main() {
    std::cout << std::endl
              << "Pony On The Heap:" << std::endl;
    ponyOnTheHeap();
    std::cout << std::endl
              << "Pony On The Stack:" << std::endl;
    ponyOnTheStack();
    return 0;
}
