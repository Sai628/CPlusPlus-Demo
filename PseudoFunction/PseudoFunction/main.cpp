//
//  main.cpp
//  PseudoFunction
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include <iostream>
#include <thread>
#include <unistd.h>

#define CL(fp) (CallaterHandler)(&fp)

class Object;

typedef void(Object::*SayHi)();
typedef void(Object::*CallaterHandler)();


void threadFunc(Object *target, CallaterHandler hanlder, int delay)
{
    sleep(delay);
    (target->*hanlder)();
}

void callater(Object *target, CallaterHandler handler, int delay)
{
    std::thread t(threadFunc, target, handler, delay);
    t.join();
}


class Object
{
public:
    SayHi sayHi;
};


class Hello:public Object
{
public:
    Hello()
    {
//        sayHi = (SayHi)(&Hello::HelloSayHi);
//        (this->*sayHi)();
        
        callater(this, CL(Hello::HelloSayHi), 3);
    }
    
    
    void HelloSayHi()
    {
        printf("hello CPP\n");
    }
};



int main(int argc, const char * argv[])
{
    printf("a\n");
    Hello *h = new Hello();
    delete h;
    
    
    return 0;
}
