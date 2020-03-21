//
// Created by SAURABH on 20-03-2020.
//

#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int > list(n);
    vector<int> list1(n);
    vector<int> mList(2*n);

    for(auto & a: list) cin>>a;
    for(auto &a: list1) cin>>a;

    int i=0,j=0,k=0;
    while(i<n || j<n){

        if(i<n && list[i]<list1[j]){
            mList[k++]=list[i++];
        }else{
            //cout<<"this is j: "<<j <<endl;
            mList[k++]=list1[j++];
        }
    }
    int len=mList.size();
    cout<<(len%2==0 ? mList[(len/2)-1]: mList[len/2]);

   // for(int a: mList) cout<<a<<" ";


}

