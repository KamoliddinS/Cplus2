//
//  Money.cpp
//  operationoverloading
//
//  Created by Kamoliddin Soliev on 2021/10/22.
//

#include "Money.h"

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}
   

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----
bool operator==(const Money &lhs, const Money &rhs){
    return (lhs.dollars ==rhs.dollars) && (lhs.cents ==rhs.cents);
};

bool operator!=(const Money &lhs, const Money &rhs){
    return (lhs.dollars !=rhs.dollars) || (lhs.cents !=rhs.cents);
};
//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


