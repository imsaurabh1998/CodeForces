//
// Created by SAURABH on 30-03-2020.
//

#include<iostream>
#include <iomanip>

using namespace std;



int main(){

    int n;
    cin>>n;
    long long res=0;

    for(int i=1;i<=n;i++){
        res+=n/(i*1.0);
    }

    cout<<setprecision(6)<<res<<endl;
}