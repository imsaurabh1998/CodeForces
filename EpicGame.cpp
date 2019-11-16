//
// Created by SAURABH on 16-11-2019.
//

#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int x,y,z;
    cin>>x>>y>>z;

    int simonCount=0;
    int AntisimonCount=0;

    while(true){

        if(z!=0){

            z-=__gcd(x,z);
            simonCount++;
        }else break;

        if(z!=0){
            z-=__gcd(y,z);
            AntisimonCount++;

        }else break;

    }

    if(simonCount>AntisimonCount){
        cout<<0<<endl;
    }else cout<<1<<endl;

}

