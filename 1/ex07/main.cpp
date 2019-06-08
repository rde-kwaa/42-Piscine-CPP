/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:25:24 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/06 15:25:28 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

size_t replaceAll(std::string &src, std::string find, std::string replace) {
    size_t pos = src.find(find);
    size_t res = pos;
    if (find.length() <= 0 || replace.length() <= 0) {
        std::cout << "Empty Values!" << std::endl;
        exit(1);
    }
    while (pos != std::string::npos) {
        src.replace(pos, find.length(), replace);
        pos = src.find(find, pos + replace.length());
    }
    return res;
}

size_t readFile(std::string file, std::string find, std::string replace) {
    std::string line;
    std::string content;
    size_t pos = 0;

    std::ifstream ifs(file);
    if (!ifs) {
        std::cout << "No file found!" << std::endl;
        exit(1);
    }
    std::ofstream ofs((file + ".replace"));
    if (!ofs) {
        std::cout << "Couldn't create file!" << std::endl;
        exit(1);
    }
    while (getline(ifs, line)) {
        content += line + '\n';
    }
    ifs.close();
    pos = replaceAll(content, find, replace);
    ofs << content;
    return (pos);
}

int main(int ac, char *av[]) {
    std::string file;
    std::string find;
    std::string replace;
    size_t pos;

    if (ac == 4) {
        file = av[1];
        find = av[2];
        replace = av[3];
        pos = readFile(file, find, replace);
        if (pos == (size_t)-1) {
            std::cout << "No match!" << std::endl;
            exit(1);
        }
    } else if (ac < 4) {
        std::cout << "Not enough arguments!" << std::endl;
        exit(1);
    } else {
        std::cout << "Too many arguments!" << std::endl;
        exit(1);
    }

    std::cout << "Replaced '" << find << "' with '" << replace << "'." << std::endl;

    return 0;
}
