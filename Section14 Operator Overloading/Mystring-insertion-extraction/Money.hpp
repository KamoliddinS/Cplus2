//
//  Money.hpp
//  operationoverloading
//
//  Created by Kamoliddin Soliev on 2021/10/22.
//

#ifndef Money_hpp
#define Money_hpp

#include <stdio.h>
#include <iostream>

class Money {
    int dollars;
    int cents;
    friend std::ostream &operator<<(std::ostream &os, const Money &rhs);
    friend std::ostream &operator >>(std::istream &in, Money &rhs);
public:
    Money(int dollars, int cents);
    Money(int total);

    

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR METHOD DECLARATIONS BELOW THIS LINE----
    
    
    //----WRITE YOUR METHOD DECLARATIONS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
};

#endif /* Money_hpp */
