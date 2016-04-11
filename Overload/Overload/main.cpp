//
//  main.cpp
//  Overload
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include <iostream>


class Hello
{
public:
    void sayHello()
    {
        printf("Hello sai\n");
    }
    
//    void sayHello(char *name)
//    {
//        printf("Hello\n");
//    }
    
    void sayHello(std::string name)
    {
        std::string str = "Hello ";
        str += name;
        
        std::cout<<str<<"\n";
    }
};


int main(int argc, const char * argv[])
{
    Hello *h = new Hello();
    h->sayHello();
    
    std::string name = "Chen";
    h->sayHello(name);
    
    return 0;
}
