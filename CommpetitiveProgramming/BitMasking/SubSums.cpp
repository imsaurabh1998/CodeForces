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
#include<algorithm>
#include<vector>

using namespace std;
#define ll long long
ll arr[100000007]={0};
ll a,b;
ll coun=0;


//This approch take more time to excute So if there is large number of N then it fails
void foundSubsets(ll val){
    ll sum=0;
    int pos=0;
    while(val){
        if(val&1) sum+=arr[pos];
        pos++;
        val=val>>1;
    }
    if(sum>=a && sum<=b) coun++;
}

void method1(){
    ll n;cin>>n>>a>>b;

    for(int i=0;i<n;i++) cin>>arr[i];

    ll mask=(1ll<<n)-1;

    for(int i=0;i<=mask;i++){
        foundSubsets(i);
    }

    cout<<coun<<endl;
}

//This approch faster than above appraoch it uses bitmasking+binarySearch

vector<ll> sumSubsets(vector<ll> A){

    vector<ll> s;

    for(int i=0;i<(1<<A.size());i++){

        ll sum=0;
       for(int j=i,y=0;j>0;j>>=1,y++){
           if(j&1) sum+=A[y];
       }
       s.push_back(sum);
    }
    return s;
}
void method2(){
    ll n; cin>>n;
    ll x,y;
    cin>>x>>y;


        int n1=n/2;
        int n2=n-n1;

        vector<ll> v1(n1),v2(n2);
        for(auto &i: v1) cin>>i;
        for(auto &i: v2) cin>>i;

        v1=sumSubsets(v1);
        v2=sumSubsets(v2);


        sort(v2.begin(),v2.end());

        ll ans=0;
        for(int i=0;i<v1.size();i++){
            ll lB=x-v1[i];
            ll uB=y-v1[i];

            auto it2=upper_bound(v2.begin(),v2.end(),uB);
            auto it1=lower_bound(v2.begin(),v2.end(),lB);

            ll sIndex=it1-v2.begin();
            ll eIndex=it2-v2.begin();


            ans+=(eIndex-sIndex);
        }

        cout<<ans<<endl;

}
int main(){
    //method1();
    method2();

}

