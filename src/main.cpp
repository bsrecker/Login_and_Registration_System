#include <iostream>
#include <string>
#include "Account.h"
#include "Account_Database.h"

int main() {
    DB::Account_Database db;
    while (true) {
        std::cout << "\n(1) Login \n(2) Register \n(3) Exit \n";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Enter username: ";
            std::string username;
            std::cin >> username;

            std::cout << "Enter password: ";
            std::string password;
            std::cin >> password;

            //check if user exists in database
            Account acc{std::move(username), std::move(password)};

            //if yes, login
            if (db.user_exists(acc)){
                std::cout << "\nLogin successful!";

                //else, display error message
            }else{
                std::cout << "\nInvalid username/password";
            }

        }
        if (choice == 2) {
            std::cout << "Enter new username: ";
            std::string username;
            std::cin >> username;

            std::cout << "Enter new password: ";
            std::string password;
            std::cin >> password;

            Account acc{std::move(username), std::move(password)};

            //add user to database and display message
            db.add_user(acc);
            std::cout << "\nSuccessfully registered as a new user...";

        } else if (choice == 3) {
            return 0;
        }
    }
}