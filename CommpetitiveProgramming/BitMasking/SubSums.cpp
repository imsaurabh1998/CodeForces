//
// Created by SAURABH on 24-03-2020.
//
//Question :->
//Given a sequence of N (1 ≤ N ≤ 34) numbers S1, ..., SN (-20,000,000 ≤ Si ≤ 20,000,000),
//determine how many subsets of S (including the empty one) have a sum between A and B
//(-500,000,000 ≤ A ≤ B ≤ 500,000,000), inclusive.
//
//Input
//   The first line of standard input contains the three integers N, A, and B.
//   The following N lines contain S1 through SN, in order.
//
//Output
//        Print a single integer to standard output representing the number of subsets satisfying
//        the above property. Note that the answer may overflow a 32-bit integer.

#include<iostream>

using namespace std;
#define ll long long
ll arr[100000007]={0};
ll a,b;
ll count=0;

void foundSubsets(ll val){
    ll sum=0;
    int pos=0;
    while(val){
        if(val&1) sum+=arr[pos];
        pos++;
        val=val>>1;
    }
    if(sum>=a && sum<=b) count++;
}
int main(){

    ll n;cin>>n>>a>>b;

    for(int i=0;i<n;i++) cin>>arr[i];

    ll mask=(1ll<<n)-1;

    for(int i=0;i<=mask;i++){
        foundSubsets(i);
    }

    cout<<count<<endl;
}

