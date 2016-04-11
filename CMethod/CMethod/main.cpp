//
//  main.cpp
//  CMethod
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include <iostream>


class Object
{
public:
    Object()
    {
        printf("Create Object\n");
    }
    
    ~Object()
    {
        printf("Destory Object\n");
    }
};


void runObject()
{
    {
        Object obj;
    }
    printf("123\n");
}


int main(int argc, const char * argv[])
{
    runObject();
    printf("end\n");
    
    
    return 0;
}
