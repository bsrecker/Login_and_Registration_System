//
// Created by brand on 1/18/2023.
//

#ifndef LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_DATABASE_H
#define LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_DATABASE_H


#include <vector>
#include "Account.h"


namespace DB {

    class Account_Database {

    private:
        std::vector<Account> list_of_users{};

    public:

        bool exists_and_valid(const Account &);

        void add_user(Account);

        void remove_user(const Account &);


    };
}
#endif //LOGIN_AND_REGISTRATION_SYSTEM_ACCOUNT_DATABASE_H
