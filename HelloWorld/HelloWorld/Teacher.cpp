//
//  Car.cpp
//  HelloWorld
//
//  Created by Sai on 6/1/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include "Teacher.h"
#include <string>
#include <iostream>
using namespace std;


Teacher::Teacher(string name, int age):m_strName(name), m_iAge(age)
{
    cout<<"Teacher(string name, int age, int m)"<<endl;
}


Teacher::Teacher(const Teacher &tea)
{
    this->setName(tea.m_strName);
    this->setAge(tea.m_iAge);
    cout<<"Teacher(const Teacher &tea)"<<endl;
}


Teacher::~Teacher()
{
    cout<<"~Teacher()"<<endl;
}

void Teacher::setName(string name)
{
    m_strName = name;
}


string Teacher::getName()
{
    return m_strName;
}


void Teacher::setAge(int age)
{
    m_iAge = age;
}


int Teacher::getAge()
{
    return m_iAge;
}


