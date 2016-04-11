//
//  main.cpp
//  String
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main(int argc, const char * argv[])
{
    string str;
    str += "Hello ";
    str += "World";
    
    cout<<str<<"\n";
    
    stringstream ss;
    ss<<"Hello Chen";
    ss<<120;
    
    cout<<ss.str()<<endl;
    
    return 0;
}
