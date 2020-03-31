//
// Created by SAURABH on 30-03-2020.
//

#include<iostream>
#include <iomanip>

using namespace std;
#define ll long long

ll a[1000006]={0};
ll ans[1000006]={0};
ll indices[1000006]={0};

int main(){

    long long n;
    cin>>n;


    for(int i=1;i<=n;i++) cin>>a[i];
    double res=0.0;
        for(int i =1;i<=n;i++){

        ans[i]=ans[i-1]+(i-indices[a[i]]);
        res+=ans[i];
        indices[a[i]]=i;

        }
//cout<<res<<endl;
double ans=0.0;
         ans=(2*(res-n)+n)/(n*n*1.0);
        cout<<fixed<<setprecision(6)<<ans<<endl;
    }

