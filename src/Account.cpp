//
// Created by brand on 1/16/2023.
//

#include <string>
#include "Account.h"
#include "Validator.h"

std::string Account::GetUserName() const {
    return this->username;
}

std::string Account::GetPassword() const {
    return this->password;
}

void Account::ViewAccounts() {
    for(const auto& i : Validator::getListOfUsers()){
        std::cout << "Username: " << i.GetUserName() << std::endl;
        std::cout << "Password: " << i.GetPassword() << std::endl;
        std::cout << "****************************************" << std::endl;
    }
}

