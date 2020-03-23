//
// Created by SAURABH on 22-03-2020.
//

#include<iostream>

using namespace std;
int a[100005]={0};

int main(){
int n;
cin>>n;
    int Xor=0;
    for(int i=0;i<n;i++) cin>>a[i],Xor=Xor^a[i];

    int pos=0;
    int temp=Xor;
    while(temp>0){
        if(temp&1) break;
        pos++;
    }
    int mask=1<<pos;
    int oneNumber=0;

    for(int i=0;i<n;i++){
        if(a[i]&mask) oneNumber=oneNumber^a[i];
    }

    cout<<(Xor^oneNumber) <<" "<<oneNumber<<endl;
}
