//
//  main.cpp
//  OOP
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include <iostream>
#include "Man.h"


int main(int argc, const char * argv[])
{
    Man *man = new Man(25);
    man->sayHello();
    man->People::sayHello();
    
    printf("%d\n", man->getAge());
    printf("%d\n", man->getSex());
    
    delete man;
    man = NULL;
    
    return 0;
}
