//
//  main.cpp
//  Functions
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[])
{
    People *p = new Man(20);
    p->sayHello();
    p->eat();
    
    return 0;
}
