//
// Created by brand on 1/16/2023.
//

#ifndef LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_H
#define LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_H

#include <string>
#include <utility>


class Account{

private:
    std::string password;
    std::string username;


public:
    bool operator<(const Account &other) const {
        return username < other.username;
    }

    Account(std::string username, std::string password)
            : username{std::move(username)}, password{std::move(password)}{

    };
    std::string get_username() const { return username; }
    std::string get_password() const { return password; }


};

#endif //LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_H
