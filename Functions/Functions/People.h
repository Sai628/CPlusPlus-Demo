//
//  People.h
//  OOP
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#ifndef __OOP__People__
#define __OOP__People__

#include <stdio.h>

class People
{
private:
    int sex;
    int age;
public:
    People();
    People(int age, int sex);
    int getSex();
    int getAge();
    virtual void sayHello();
    virtual void eat()=0;
};


#endif /* defined(__OOP__People__) */
