//
// Created by SAURABH on 18-11-2019.
//

#include<iostream>

using namespace std;

int main(){

//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int n;
    cin>>n;

    int count=0;
bool flag=false;


    count+=n/2;
    cout<<count<<endl;
    if(n%2==0) flag=true;
    for(int i=0;i<count-1;i++){
        cout<<2<<" ";
    }

    if(flag) cout<<2<<endl;
    else
    cout<<3<<endl;

}

