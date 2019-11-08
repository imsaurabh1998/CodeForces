//
// Created by SAURABH on 07-11-2019.
//

#include<iostream>

using namespace std;

int main(){

    int k,l,m,n,d;

    cin>>k>>l>>m>>n>>d;


        int count=0;

        if(k==1){
            cout<<d<<endl;
            return 0;
        }

        for(int i=1;i<=d;i++){

            if(i%k==0 || i%l==0 || i%m==0 || i%n==0){

               continue;
            }
            count++;

        }

        cout<<(d-count)<<endl;
        return 0;



}

