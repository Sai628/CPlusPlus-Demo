//
//  Car.h
//  HelloWorld
//
//  Created by Sai on 6/1/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#ifndef __HelloWorld__Car__
#define __HelloWorld__Car__

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


class Teacher
{
public:
    Teacher(string name = "Jim", int age = 25);
    Teacher(const Teacher &tea);
    ~Teacher();
    
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();
    
private:
    string m_strName;
    int m_iAge;
};


#endif /* defined(__HelloWorld__Car__) */