//
//  I_Printable.cpp
//  operationoverloading
//
//  Created by Kamoliddin Soliev on 2021/10/23.
//
//#include "Account.h"

#include "I_Printable.hpp"

std::ostream &operator<<(std::ostream &os, const I_Printable &obj){
    obj.print(os);
        
return os;
};
