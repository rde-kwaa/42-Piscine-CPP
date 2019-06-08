/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 22:58:30 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/03 23:27:07 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void megaphone(int ac, char *av[]) {
    for (int i = 1; i < ac; i++) {
        for (int j = 0; j < (int)strlen(av[i]); j++) {
            std::cout << (char)toupper(av[i][j]);
        }
    }
}

int main(int ac, char *av[]) {
    if (ac < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    } else {
        megaphone(ac, av);
    }
    std::cout << std::endl;

    return 0;
}
