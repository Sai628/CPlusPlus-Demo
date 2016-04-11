//
//  People.h
//  NameSpace
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#pragma once

#include <stdio.h>


namespace MyNS
{
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
        void sayHello();
    };
}


