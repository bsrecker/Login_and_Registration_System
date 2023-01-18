//
// Created by brand on 1/16/2023.
//

#ifndef LOGIN_AND_REGISTRATION_SYSTEM_VALIDATOR_H
#define LOGIN_AND_REGISTRATION_SYSTEM_VALIDATOR_H

#include "Account.h"
#include <utility>
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <memory>


class Validator {
private:
    static std::vector<Account> list_of_users;
    static const std::string username;
    static const std::string password;

public:
    Validator();
    ~Validator();
    static bool IsAnExistingUser(const std::shared_ptr<Account>&);
    static void AddUser(const std::shared_ptr<Account>&);


    static bool IsCorrectPassword(const std::shared_ptr<Account>&);

    static const std::vector<Account> &getListOfUsers();
};

#endif //LOGIN_AND_REGISTRATION_SYSTEM_VALIDATOR_H
