/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:43:48 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/05 18:17:29 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_H
#define PONY_CLASS_H

#include <iostream>

class Pony {
   private:
    std::string _name;
    std::string _gender;
    std::string _coatcolor;
    std::string _coatpattern;
    std::string _hands;
    std::string _age;

   public:
    Pony(void);
    ~Pony(void);

    void setName(std::string);
    void setGender(std::string);
    void setCoatColour(std::string);
    void setCoatPattern(std::string);
    void setHands(std::string);
    void setAge(std::string);

    std::string getName(void) const;
    std::string getGender(void) const;
    std::string getCoatColour(void) const;
    std::string getCoatPattern(void) const;
    std::string getHands(void) const;
    std::string getAge(void) const;

    void neigh() const;
};

#endif
