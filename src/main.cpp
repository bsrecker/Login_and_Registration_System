#include <iostream>
#include "Account.h"
#include "Account_Database.h"
#include <string>

int main() {

    DB::Account_Database db;
    while (true){

        std::cout << "\nUsername: ";
        std::string username;
        std::cin >> username;

        std::cout << "\nPassword: ";
        std::string password;
        std::cin >> password;

        Account acc{std::move(username), std::move(password)};

        if (db.exists_and_valid(acc)){
            std::cout << "\nLogged in Successfully: ";
        } else {
            db.add_user(std::move(acc));
            std::cout << "\nRegistering new user...";
        }
    }

}
