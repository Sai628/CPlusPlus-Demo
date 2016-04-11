//
//  main.cpp
//  NameSpace
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include <iostream>
#include "People.h"


int main(int argc, const char * argv[])
{
    MyNS::People *p = new MyNS::People();
    p->sayHello();
    
    delete p;
    p = NULL;
    
    return 0;
}


