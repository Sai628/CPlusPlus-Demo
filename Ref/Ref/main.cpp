//
//  main.cpp
//  Ref
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include <iostream>


class Point
{
private:
    int x;
    int y;
public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    
    
    int getX()
    {
        return this->x;
    }
    
    
    int getY()
    {
        return this->y;
    }
    
    
    void add(Point &p)
    {
        this->x += p.x;
        this->y += p.y;
    }
    
    
    void toString()
    {
        std::cout<<"[x:"<<x<<",y:"<<y<<"]\n";
    }
};


int main(int argc, const char * argv[])
{
    Point p(1, 1);
    p.toString();
    
    Point p2 = Point(2, 3);
    p.add(p2);
    p.toString();
    
    return 0;
}

















