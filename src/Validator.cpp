//
// Created by brand on 1/16/2023.
//

#include <algorithm>
#include "Validator.h"


bool Validator::IsAnExistingUser(const std::shared_ptr<Account>& account) {
    std::cout << list_of_users.size() << std::endl;

    for (auto& c: Validator::list_of_users) {

        if (c.GetUserName() == account->GetUserName()) {
            return true;
        }
    }
    return false;
}

std::vector<Account> Validator::list_of_users;

void Validator::AddUser(const std::shared_ptr<Account>& a1) {
    Validator::list_of_users.push_back(*a1);
    std::cout << list_of_users.size() << std::endl;
}

bool Validator::IsCorrectPassword(const std::shared_ptr<Account> &password) {
    for (auto& c: Validator::list_of_users) {

        if (c.GetPassword() == password->GetPassword()) {
            std::cout << "Login Successful!" << std::endl;
            return true;

        } else {

        return false;}
    }

}

const std::vector<Account> &Validator::getListOfUsers() {
    return list_of_users;
}

Validator::Validator() = default;


Validator::~Validator() = default;


