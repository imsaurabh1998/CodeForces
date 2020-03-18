//
// Created by Saurabh on 3/18/2020.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int arr[]={10,11,11,11,23,34};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    bool present=binary_search(arr,arr+n,key);

    if(present)cout<<"Element is present: "<<key<<endl;
    else cout<<"Not present"<<endl;

    auto lb=lower_bound(arr,arr+n,key);
    auto ub=upper_bound(arr,arr+n,key);

    cout<<"lower bound index "<<lb-arr<<endl;
    cout<<"upper bound index "<<ub-arr<<endl;
    cout<<"occurence of elements  "<<ub-lb<<endl;

}
