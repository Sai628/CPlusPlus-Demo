//
//  Man.h
//  NS
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#ifndef __NS__Man__
#define __NS__Man__

#include <stdio.h>
#include "People.h"


class Man: public People
{
public:
    Man(int age);
    virtual void sayHello();
    virtual void eat();
};

#endif /* defined(__NS__Man__) */
