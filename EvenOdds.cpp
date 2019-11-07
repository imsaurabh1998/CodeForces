//
// Created by Saurabh on 11/6/2019.
//

#include<iostream>

using namespace std;

int main(){

   long long n,k;

    cin>>n>>k;

    long long halfNumber=0;

    if(n%2){
        halfNumber=n/2+1;
    }else halfNumber=n/2;



    if(halfNumber<k){
        cout<<2*(k-halfNumber)<<endl;
        return 0;
    }else{
        long long num=1;

        if(k>1){
            num=3+(k-2)*2;
        }


        cout<<num<<endl;
    }

    return 0;

}

