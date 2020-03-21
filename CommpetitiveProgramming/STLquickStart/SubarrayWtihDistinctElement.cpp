//
// Created by SAURABH on 21-03-2020.
//

#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;
long long int mod=1000000007;

int main(){

    int n;
    cin>>n;
    int arr[100005]={0};
   for(int i=0;i<n;i++) cin>>arr[i];

   int j=0;
   unordered_set<int> s;

   long long int ans=0;
   for(int i=0;i<n;i++){

       while(j<n && s.find(arr[j])==s.end()){
           s.insert(arr[j]);
           j++;

       }


         ans+=(((j-i)*(j-i+1))/2)%mod;
       s.erase(arr[i]);
   }

   cout<<ans<<endl;
}

