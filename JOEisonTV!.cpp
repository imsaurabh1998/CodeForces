//
// Created by Saurabh on 1/20/2020.
//

#include<bits/stdc++.h>

using namespace std;

void solve(int n){

    double ans;
    for(int i=1;i<=n;i++){
        ans+=1.0/i;
    }

    cout<<ans<<endl;
}
int main(){

    int n;
    cin>>n;
    solve(n);
}
