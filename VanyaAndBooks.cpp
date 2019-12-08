//
// Created by SAURABH on 08-12-2019.
//

#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    int a;
    cin>>a;

    long long int count=0;



    for(int i=9;a>0;i*=10){
        count+=a;
        a-=i;
    }

    cout<<count<<endl;
}
