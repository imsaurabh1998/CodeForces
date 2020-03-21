//
// Created by SAURABH on 20-03-2020.
//

#include<iostream>
#include<queue>
#include<set>

using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    priority_queue<int> pq;
    int hash[100007]={0};
    vector<int> a;

   for(int i=0;i<n;i++){
       int t;
       cin>>t;
       hash[t]=i;
       a.push_back(t);
       pq.push(t);
   }
    int in=0;
   for(int i =0;i<k;i++){
       int t=pq.top();
       //cout<<"val of t: "<<t<<endl;
       pq.pop();
       int index=hash[t];


       if(a[in]!=t) {
           int temp = a[in];
           a[in] = t;
           a[index] = temp;

           int tempIN=hash[t];
           hash[t]=hash[temp];
           hash[temp]=tempIN;

          // cout<<"value of tempIN "<<tempIN<<" hash[t] is "<<hash[t]<<" hash[a[in]] is "<<hash[a[i]]<<endl;

//            for(int i=0;i<10;i++) cout<<hash[i]<<" ";
//            cout<<endl;
       }else i--;

       in++;


   }
    for(int val: a) cout<<val<<" ";
    cout<<endl;





}

