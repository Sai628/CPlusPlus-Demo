//
//  People.h
//  OOP
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#pragma once

#include <stdio.h>

class People
{
private:
    int age;
    int sex;
    
public:
    People();
    People(int age, int sex);
    int getAge();
    int getSex();
    void sayHello();
};


