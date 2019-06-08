/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <rde-kwaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 00:12:25 by rde-kwaa          #+#    #+#             */
/*   Updated: 2019/06/04 18:24:49 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H
#define MAX_ENTREES 8
#define WIDTH 10

#include <iomanip>
#include <iostream>
#include <string>

class Contact {
   private:
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _login;
    std::string _post;
    std::string _email;
    std::string _phone;
    std::string _birthday;
    std::string _favouritemeal;
    std::string _underwearcolour;
    std::string _darkestsecret;

   public:
    Contact(void);
    ~Contact(void);

    void setFirstName(std::string);
    void setLastName(std::string);
    void setNickname(std::string);
    void setLogin(std::string);
    void setPost(std::string);
    void setEmail(std::string);
    void setPhone(std::string);
    void setBirthday(std::string);
    void setFavouriteMeal(std::string);
    void setUnderwearColour(std::string);
    void setDarkestSecret(std::string);
    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickname(void);
    std::string getLogin(void);
    std::string getPost(void);
    std::string getEmail(void);
    std::string getPhone(void);
    std::string getBirthday(void);
    std::string getFavouriteMeal(void);
    std::string getUnderwearColour(void);
    std::string getDarkestSecret(void);
};

Contact newContact();
void searchBook(Contact brulebook[], int contactCount);

#endif
