//
//  Trust.cpp
//  operationoverloading
//
//  Created by Kamoliddin Soliev on 2021/10/23.
//

#include "Trust.hpp"
Trust::Trust(std::string name , double amount, int int_rate): Account{name,amount}, int_rate(int_rate){
    
};

bool Trust::deposit(double amount){
    if (amount>=minforbounus) {
        amount +=def_bounus;
    }
    
    return Account::deposit(amount);
}
bool Trust::withdrawl(double amount){
    if ((amount < balance*0.2) && (allowedtobonus) ) {
        allowedtobonus-=1;
        return Account::withdraw(amount);
    }
    return  false;
}
std::ostream &operator<<(std::ostream &os, const Trust &account) {
    os << "[Trust: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}
