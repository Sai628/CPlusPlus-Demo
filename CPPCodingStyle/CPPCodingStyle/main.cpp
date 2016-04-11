//
//  main.cpp
//  CPPCodingStyle
//
//  Created by Sai on 3/4/16.
//  Copyright © 2016 Sai. All rights reserved.
//

#include <iostream>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    int a = 10;
    const int constant = a;
    int* modifier = (int *)(&constant);
    
    printf("%d\n", constant);
    
    *modifier = 30;
    
    printf("%d\n", constant);
    
    return 0;
}
