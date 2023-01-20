//
// Created by brand on 1/16/2023.
//


#include "Account.h"


bool Account::operator==(const Account& other) const {
    if (username != other.username || password != other.password){
        return false;
    }
    return true;
}



