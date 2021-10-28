//
//  Checking.hpp
//  operationoverloading
//
//  Created by Kamoliddin Soliev on 2021/10/23.
//

#ifndef Checking_hpp
#define Checking_hpp
#include "Account.h"


#include <stdio.h>

class Checking : public Account  {
    friend std::ostream &operator<<(std::ostream &os, const Checking &account);
    
private:
    static constexpr const char *def_name = "Unnamed Chekcking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 1.5;
    
protected:
    double int_rate;

public:
    Checking (std::string name = def_name, double balance =def_balance, int int_rate = def_int_rate );
    bool withdrawl (double amount);
    bool deposit (double amount);
};






#endif /* Checking_hpp */
