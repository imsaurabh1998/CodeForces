//
// Created by SAURABH on 16-01-2020.
//

#include<bits/stdc++.h>

using namespace std;



int a[1000000],sum=0;

int main(){

    int n,k;
    cin>>n>>k;

    for(int i=1;i<=n;i++) scanf("%1d",&a[i]);

    for(int i=1;i<=n;i++){

        sum=i%k;
        if(sum==0) sum=k;

        if(a[sum]>a[i]) break;
        if(a[sum]<a[i]){
            a[k]++;
            break;
        }

    }

    for(int i=k;i>=1;--i){
        if(a[i]==10){
            a[i]=0;
            a[i-1]++;
        }
    }

    cout<<n<<endl;

    for(int i=1;i<=n;i++){

        sum=i%k;
        if(sum==0) sum=k;

        cout<<a[sum];
    }

}

