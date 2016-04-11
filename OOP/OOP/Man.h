//
//  Man.h
//  OOP
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#ifndef __OOP__Man__
#define __OOP__Man__

#include <stdio.h>
#include "People.h"


class Man:public People
{
public:
    Man(int age);
    void sayHello();
};

#endif /* defined(__OOP__Man__) */
