//
// Created by SAURABH on 28-12-2019.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
typedef unsigned long long int ll;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    cin>>n;

    while(n-->0){

        int number;
        cin>>number;

        ll powVal = pow(2,number);

        string val=to_string(powVal);

        ll sum=0;
        cout<<val<<endl;
        for(int i=0;i<val.length();i++){

            sum+=val[i]-'0';
        }

        cout<<sum<<endl;
    }
    return 0;
}
