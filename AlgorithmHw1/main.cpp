//
//  main.cpp
//  AlgorithmHw1
//
//  Created by Yiming Mao on 01/10/2016.
//  Copyright © 2016 Yiming Mao. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    unsigned long to_n;
    cin>>to_n;
    //cout<< to_n<<endl;
    
    unsigned long operations;
    
    if (to_n%2==0)
    {
        operations=to_n/2;
    }
    else
    {
        operations=(to_n+1)/2;
    }
    
    unsigned long numbers[operations-1];
    for (int i=0;i<operations-1;i++)
    {
        numbers[i]=2*i+3;
    }
    
    for (int i = 0; i < operations; i++)
    {
        cout << numbers[i]<<endl;
    }
    
    /*for (int i=0;i<to_n;i++)
    {
        
        
    }*/
    
    // insert code here...
    cout << "Hello, World!\n";
    return 0;
}
