//
// Created by Saurabh on 12/23/2019.
//


#include<bits/stdc++.h>

using namespace std;
int CoinNedded(int coins[],int sum,int n);
int coinNeededBottom(int coins[], int sum,int n);

int dp[1000]={0};


int main(){

    int coins[]={1,7,10};
    int sum=26;
    int n=3;

    cout<<CoinNedded(coins,sum,n)<<endl;
    cout<<coinNeededBottom(coins,sum,n)<<endl;
}
//Recursion
int CoinNedded(int coins[] ,int sum, int n){

    if(sum==0) return 0;
    int s=INT_MAX;



    for(int i=0;i<n;i++){

        if(sum-coins[i]>=0){
            int minSum=CoinNedded(coins,sum-coins[i],n);
            if(minSum!=s){
                s=min(s,minSum+1);


            }
        }
    }

    return s;

}

//bottom-up Approch
int coinNeededBottom(int coins[], int sum,int n){

    int *dp=new int[sum+1];

    for(int i=0;i<sum;i++) dp[i]=INT_MAX;

    dp[0]=0;

    for(int Rupee=1;Rupee<=sum; Rupee++)
        for(int i=0;i<n;i++)
            if((Rupee-coins[i])>=0)
                dp[Rupee]=min(dp[Rupee],dp[Rupee-coins[i]]+1);

    return dp[sum];

}


//Top Bottom
int coinNeededTop(int coins[], int sum, int n){

    if(sum==0) return 0;
    int s=INT_MAX;

    if(dp[sum]) return dp[sum];

    for(int i=0;i<n;i++){

        if(sum-coins[i]>=0){
            int minSum=CoinNedded(coins,sum-coins[i],n);
            if(minSum!=s){
                s=min(s,minSum+1);
                dp[sum]=s;

            }
        }
    }

    return s;

}