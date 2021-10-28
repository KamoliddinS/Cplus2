//
//  Trust.hpp
//  operationoverloading
//
//  Created by Kamoliddin Soliev on 2021/10/23.
//

#ifndef Trust_hpp
#define Trust_hpp

#include <stdio.h>
#include "Account.h"

class Trust : public Account  {
    friend std::ostream &operator<<(std::ostream &os, const Trust &account);
    
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 1.5;
    static constexpr double def_bounus = 50.0;
    int allowedtobonus = 4;
    static constexpr double minforbounus = 5000.0;
protected:
    double int_rate;

public:
    Trust (std::string name = def_name, double balance =def_balance, int int_rate = def_int_rate );
    bool withdrawl (double amount);
    bool deposit (double amount);
};

#endif /* Trust_hpp */
