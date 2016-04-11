//
//  main.cpp
//  FileSystem
//
//  Created by Sai on 6/18/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[])
{
    ofstream of("data.txt");
    of<<"Hello CPP\n";
    of.close();
    
    ifstream inf("data.txt");
    stringbuf sb;
    inf>>&sb;
    inf.close();
    
    cout<<sb.str()<<endl;
    
    return 0;
}
