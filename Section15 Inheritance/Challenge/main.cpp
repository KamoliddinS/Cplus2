// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Trust.hpp"
#include "Checking.hpp"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    vector<Trust> trust_accounts;
    trust_accounts.push_back(Trust{});
    trust_accounts.push_back(Trust{"Kamoliddin"});
    trust_accounts.push_back(Trust{"Bekzod", 3000});
    trust_accounts.push_back(Trust{"SHoxhaho", 5000});
    
    display(trust_accounts);
    deposit(trust_accounts, 5000.0);
    withdraw(trust_accounts, 1000.0);
    return 0;
}

