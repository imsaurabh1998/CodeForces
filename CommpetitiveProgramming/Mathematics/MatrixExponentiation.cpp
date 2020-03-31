//
// Created by SAURABH on 28-03-2020.
//

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000000

vector<ll> b,c;
int k;

vector<vector<ll>> multi(vector<vector<ll>> A, vector<vector<ll>> B){

    vector<vector<ll>> C(k+1,vector<ll>(k+1));

    for(int i=1;i<=k;i++){

        for(int j=1;j<=k;j++){

            for(int x=1;x<=k;x++){

                C[i][j]+=(A[i][x]*B[x][j])% mod;
            }
        }

    }

    return C;
}

vector<vector<ll>> power(vector<vector<ll>> A,int n){

    if(n==1) return A;

    if(n&1) return multi(A,power(A, n-1));
    else {

        vector<vector<ll>> m=power(A,n/2);
        return multi(m,m);
    }

}

ll compute(int n){
    if(n<=k){
        return b[n-1];
    }else{

        vector<ll> f1(k+1);
        //generate f array for step 1
        for(int i=1;i<=k;i++){
            f1[i]=b[i-1];
        }

        //generate matrix for exponentitation

        vector<vector<ll>> A(k+1,vector<ll>(k+1));
        for(int i=1;i<=k;i++){
            for(int j=1;j<=k;j++){

                if(i<k){
                    if(i+1==j){
                        A[i][j]=1;
                    }else A[i][j]=0;

                    continue;
                }
                A[i][j]=c[k-j];
            }
        }

        // pow for n;

        A=power(A,n-1);

        ll res=0;
        for(int i=1;i<=k;i++){
            res+=(A[1][i]*f1[i])%mod;
            res%=mod;
        }

        return res;

    }

}

int main(){

   ll t,n,num;
   cin>>t;
    while(t--){
        cin>>k;

        for(int i =1;i<=k;i++){
            cin>>num;
            b.push_back(num);
        }

        for(int i=1;i<=k;i++){
            cin>>num;
            c.push_back(num);
        }

        cin>>n;
        cout<<compute(n)<<endl;

        b.clear();
        c.clear();
    }
}
