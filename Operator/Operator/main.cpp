//
//  main.cpp
//  Operator
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
    
    
    void add(Point p)
    {
        add(p.getX(), p.getY());
    }
    
    
    void add(int x, int y)
    {
        this->x += x;
        this->y += y;
    }
    
    
    void operator+=(Point p)
    {
        add(p);
    }
    
    
    void toString()
    {
        std::cout<<"[x:"<<x<<",y:"<<y<<"]\n";
    }
};

int main(int argc, const char * argv[])
{
//    Point p(10, 10);
//    p.add(Point(12, 4));
//    p.toString();
//    
//    p+=Point(19, 3);
//    p.toString();
    
    Point *p = new Point(5, 5);
    (*p) += Point(2, 3);
    p->toString();
    
    
    return 0;
}
























