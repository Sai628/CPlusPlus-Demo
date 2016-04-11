//
//  main.cpp
//  HelloWorld
//
//  Created by Sai on 6/1/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;


int main(int argc, const char * argv[])
{
    Teacher t1("Chen", 23);
    Teacher t2(t1);
    
    Teacher *p = new Teacher();
    delete p;
    p = NULL;
    
    cout<<t1.getName()<<" "<<t1.getAge()<<endl;
    cout<<t2.getName()<<" "<<t2.getAge()<<endl;
    
    return 0;
}

