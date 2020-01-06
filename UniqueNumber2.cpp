//
// Created by SAURABH on 04-01-2020.
//

#include<bits/stdc++.h>

using namespace std;


void findUnique(int *a, int n){

    int res=0;
    for(int i=0;i<n;i++){

        res^=a[i];
    }

    int temp=res;
    int i=0;
    while(temp>0){
        if(temp&1) break;
        i++;
        temp>>1;
    }

    int mask=(1<<i);

    int firstNo=0;

    for(int i=0;i<n;i++){
        if(mask&a[i]!=0){
            firstNo^=a[i];
        }
    }

    int secondNo=firstNo^res;

    cout<<firstNo<<" "<<secondNo<<endl;
}
int main(){

    int n;
    cin>>n;

    vector<int> a;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }

    findUnique(a,n);
}

