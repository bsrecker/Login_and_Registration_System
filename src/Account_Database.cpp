//
// Created by brand on 1/18/2023.
//

#include <algorithm>
#include "Account_Database.h"
#include "Account.h"

bool DB::Account_Database::exists_and_valid(const Account &acc) {
    if (std::any_of(list_of_users.cbegin(), list_of_users.cend(),
                    [acc](const Account &a) { return a == acc;}))
        return true;
    return false;
}


void DB::Account_Database::add_user(Account acc) {
    list_of_users.push_back(acc);
}

void DB::Account_Database::remove_user(const Account &acc) {
    list_of_users.erase(std::remove(list_of_users.begin(), list_of_users.end(), acc), list_of_users.end());
}
