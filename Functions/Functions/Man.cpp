//
//  Man.cpp
//  NS
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include "Man.h"


Man::Man(int age):People(age, 1)
{
    
}


void Man::sayHello()
{
    printf("Man say: hello\n");
}


void Man::eat()
{
    printf("Man eat\n");
}