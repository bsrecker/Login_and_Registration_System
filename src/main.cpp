#include <iostream>
#include <memory>

#include "Account.h"
#include "Validator.h"


int main() {
    std::string controlflow;
    do{
        std::cout << "Please enter your username and password. Otherwise create a new user." << std::endl;
        std::cout << "Username: ";

        std::string username;
        std::cin >> username;

        std::cout << "Password: ";

        std::string password;
        std::cin >> password;

        std::shared_ptr<Account> a1 = std::make_shared<Account>(username, password);
            bool is_correct_pass = Validator::IsCorrectPassword(a1);
            bool is_existing_user = Validator::IsAnExistingUser(a1);

            if (is_existing_user && is_correct_pass) {
                std::cout << "Welcome " << a1->GetUserName() << std::endl;

            } else if (is_existing_user && !is_correct_pass)   {
                std::cout << "User already exists./Invalid password, please try again!" << std::endl;

            }else{
                std::cout << "Registering new user....";
                Validator::AddUser(a1);
            }

        std::cout << "Register/Login another user? (Y/N)" << std::endl;
        std::cin >> controlflow;

        }while (controlflow != "N");

    Account::ViewAccounts();

    return 0;

}
