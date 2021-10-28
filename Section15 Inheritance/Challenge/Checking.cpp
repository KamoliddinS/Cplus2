//
//  Checking.cpp
//  operationoverloading
//
//  Created by Kamoliddin Soliev on 2021/10/23.
//

#include "Checking.hpp"

Checking::Checking(std::string name , double amount, int int_rate): Account{name,amount}, int_rate(int_rate){
    
};

bool Checking::deposit(double amount){
    return Account::deposit(amount);
}
bool Checking::withdrawl(double amount){
    amount -=int_rate;
    return Account::withdraw(amount);
}
