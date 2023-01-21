#include <iostream>
#include <string>
#include "Account.h"
#include "Account_Database.h"

int main() {
    DB::Account_Database db;
    while (true) {
        std::cout << "\n(1) Login \n(2) Register  \n(3) Display all users \n(4) Exit \n";
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
            if (db.user_exists(acc)) {
                std::cout << "\nLogin successful!";

                int selection;
                std::cout << "\nPress 1 to delete user, otherwise press any button to log out\n";
                std::cin >> selection;

                if (selection == 1) {
                    db.remove_user(acc);
                    std::cout << "\nSuccessfully deleted user.";
                }
            } else {
                std::cout << "\nInvalid username/password";
            }
        } else if (choice == 2) {
            std::cout << "Enter new username: ";
            std::string user;
            std::cin >> user;

            std::cout << "Enter new password: ";
            std::string pass;
            std::cin >> pass;

            //create an Account object with the entered username and password
            Account acc{user, pass};

            //add user to the database
            db.add_user(acc);
            std::cout << "\nSuccessfully registered as a new user...";

            //remove the logged-in user from the database
        } else if (choice == 3) {
            db.display_all_users();

            //Exit the program
        } else if (choice ==4){
            return 0;
        }
    }
}