//
// Created by Saurabh on 11/12/2019.
//

#include<iostream>

using namespace std;

int main(){

    int n,m,a,b;

    cin>>n>>m>>a>>b;


    int normalRideCost=(n*a);
    int specialRideCost=(n%m==0)?(n/m*b): (n/m*b+b);
    int mixRideCost=(n/m*b)+(n%m*a);
int mn=min(normalRideCost,min(specialRideCost,mixRideCost));
   cout<<mn<<endl;
}