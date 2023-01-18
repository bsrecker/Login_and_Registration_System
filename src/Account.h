//
// Created by brand on 1/16/2023.
//

#ifndef LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_H
#define LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_H


#include <utility>
#include <string>

class Account{

private:
    std::string username;
    std::string password;


public:
    Account(std::string  username, std::string  password)
            : username{username}, password{password}{

    };
    std::string GetUserName() const;


    std::string GetPassword() const;

    static void ViewAccounts();
};
#endif //LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_H
