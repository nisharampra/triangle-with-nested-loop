//
//  main.cpp
//  triangle with nested loop
//
//  Created by Nisha Ramprasath on 1/11/23.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++)
        {
            if(i<j)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
