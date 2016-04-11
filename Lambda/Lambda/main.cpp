//
//  main.cpp
//  Lambda
//
//  Created by Sai on 6/19/15.
//  Copyright (c) 2015 Sai. All rights reserved.
//

#include <iostream>
#include <functional>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[])
{
    auto f1 = [](int x, int y){
        return x + y;
    };
    
    cout<<f1(2, 3)<<endl;
    
    function<int (int, int)> f2 = [](int x, int y){
        return x + y;
    };
    
    cout<<f2(3, 4)<<endl;
    
    
    int i = 3;
    int j = 5;
    function<int (void)> f3 = [=, &j](){
        return i + j;
    };
    
    i = 22;
    j = 44;
    cout<<f3()<<endl;
    
    
    int n = [](int x, int y){
        return x + y;
    }(4, 5);
    
    cout<<n<<endl;
    
    
    list<int> numbers = {13, 17, 42, 46, 99};
    auto result = find_if(numbers.begin(), numbers.end(), [](int n){
        return (n % 2) == 0;
    });
    
    if (result != numbers.end())
    {
        cout<<"The first even number in the list is: "<<*result<<endl;
    }
    else
    {
        cout<<"The list contains no even numbers."<<endl;
    }
    
    int timestwoplusthree = [](int x){
        
        int n = [](int y){
            return y * 2;
        }(x);
        
        return n + 3;
        
    }(5);
    
    cout<<timestwoplusthree<<endl;
    
    return 0;
}










