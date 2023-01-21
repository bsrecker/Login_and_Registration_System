//
// Created by brand on 1/18/2023.
//

#include <iostream>
#include "Account_Database.h"
#include "Account.h"
#include <algorithm>



bool DB::Account_Database::user_exists(const Account &acc) const {
    auto it = list_of_users.find(acc.get_username());
    if (it != list_of_users.end()){
        return it->second.get_password() == acc.get_password();
    }
    return false;
}


void DB::Account_Database::add_user(const Account &acc) {
    list_of_users.insert({acc.get_username(), acc});
}

void DB::Account_Database::remove_user(const Account &acc) {
    list_of_users.erase(acc.get_username());
}

void DB::Account_Database::display_all_users() const {
    for (const auto &i : list_of_users){
        std::cout << i.first << "\n";
        std::cout <<"***********************\n";
    }
}

bool DB::Account_Database::validate_password(const Account &acc, const std::string& password) {
    return acc.get_password() == password;
}



