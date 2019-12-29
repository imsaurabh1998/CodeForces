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


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    cin>>n;

    while(n-->0){

        int number;
        cin>>number;

        unsigned long long int powVal=pow(2,number);

        string val=to_string(powVal);

        unsigned long long int sum=0;
        cout<<val<<endl;
        for(int i=0;i<val.length();i++){

            sum+=val[i]-'0';
        }

        cout<<sum<<endl;
    }
    return 0;
}
