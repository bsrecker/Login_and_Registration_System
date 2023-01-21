//
// Created by brand on 1/18/2023.
//

#ifndef LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_DATABASE_H
#define LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_DATABASE_H

#include <map>
#include "Account.h"


namespace DB {

    class Account_Database {

    private:
        std::map<std::string, Account> list_of_users;

    public:

        bool user_exists(const Account &);

        void add_user(const Account &);

        void remove_user(const Account &);

        void display_all_users();
    };
}
#endif //LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_DATABASE_H
