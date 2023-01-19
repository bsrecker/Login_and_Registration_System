//
// Created by brand on 1/16/2023.
//

#ifndef LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_H
#define LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_H

#include <string>

class Account{

private:
    std::string password;
    std::string username;

public:
    Account(std::string_view username, std::string_view password)
            : username{username}, password{password}{

    };
    bool operator==(const Account& other) const;


};
#endif //LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_H
