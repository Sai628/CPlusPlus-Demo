//
//  main.cpp
//  FriendClass
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include <iostream>


class A
{
    friend class B;
    
private:
    int num;
    
public:
    A()
    {
        num = 10;
    }
};


class B: public A
{
public:
    B()
    {
        A a;
        printf("%d\n", a.num);
    }
};


int main(int argc, const char * argv[])
{
    B b;
    
    
    return 0;
}
