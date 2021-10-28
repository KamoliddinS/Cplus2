//
//  I_Printable.hpp
//  operationoverloading
//
//  Created by Kamoliddin Soliev on 2021/10/23.
#include <iostream>
#include <string>

#ifndef I_Printable_hpp
#define I_Printable_hpp

#include <stdio.h>

class I_Printable
        {
            friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
        public:
            virtual void print(std::ostream &os) const = 0;
            virtual ~I_Printable() = default;
        };


#endif /* I_Printable_hpp */
