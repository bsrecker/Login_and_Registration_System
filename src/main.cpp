#include <iostream>
#include <string>
#include <limits>
#include "Account.h"
#include "Account_Database.h"


void input_fail() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cerr << "Invalid selection, please try again.\n";
}

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


            Account acc{std::move(username), std::move(password)};

            //check if user exists in the database. If yes, login.
            if (db.user_exists(acc)) {
                std::cout << "Login successful!\n";

                int selection;
                std::cout << "Press 1 to delete user, otherwise press 0 to log out\n";
                std::cin >> selection;

                if (selection == 1) {
                    db.remove_user(acc);
                    std::cout << "Successfully deleted user.\n";

                }else if (selection == 0){
                    std::cout << "Logged out!\n";

                }else{
                    input_fail();
                }

            } else {
                std::cout << "Invalid username/password\n";
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
            std::cout << "Successfully registered as a new user...\n";

            //remove the logged-in user from the database
        } else if (choice == 3) {
            db.display_all_users();

            //Exit the program
        } else if (choice ==4){
            return 0;

            //Catch invalid inputs and throw an error message
        }else{
            input_fail();
        }
    }
}


