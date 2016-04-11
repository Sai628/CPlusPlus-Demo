//
//  main.cpp
//  Containers
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include <iostream>
#include <list>
#include <map>
#include <string>

using namespace std;


int main(int argc, const char * argv[])
{
    std::list<string> list;
    list.push_back("hello");
    list.push_back("Chen");
    
    for (std::list<std::string>::iterator it = list.begin(); it != list.end(); it++)
    {
        cout<<*it<<"\n";
    }
    
    std::map<string, string> map;
    map.insert(pair<string, string>("Hello", "Chen"));
    map.insert(pair<string, string>("name", "ABC"));
    
    map["name"] = "A";
    
    cout<<map.at("Hello")<<"\n";
    cout<<map.at("name")<<"\n";
    
    return 0;
}
