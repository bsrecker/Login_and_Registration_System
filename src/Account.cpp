//
// Created by brand on 1/16/2023.
//

#include <string>
#include "Account.h"


bool Account::operator==(const Account &other) const {
    if (this->username == other.username && this->password == other.password){
        return true;
    } else
        return false;
}
