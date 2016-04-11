//
//  People.cpp
//  NameSpace
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include "People.h"


namespace MyNS
{
    People::People()
    {
        this->age = 10;
        this->sex = 1;
    }
    
    People::People(int age, int sex)
    {
        this->age = age;
        this->sex = sex;
    }
    
    
    int People::getSex()
    {
        return this->sex;
    }
    
    int People::getAge()
    {
        return this->age;
    }
    
    
    void People::sayHello()
    {
        printf("Hello CPP\n");
    }
}


