//
// Created by SAURABH on 31-12-2019.
//


#include<bits/stdc++.h>

using namespace std;

int n=4;
int VISITED_ALL=(1<<n)-1;
int dp[16][4];

int tsp(int path[][10], int mask, int pos){

    if(mask==VISITED_ALL) return path[pos][0];
    int ans=INT_MAX;

    if(dp[mask][pos]!=-1) return dp[mask][pos];

    for(int city=0;city<n;city++){

        if((mask & (1<<city)) ==0){
            int newAns=path[pos][city]+tsp(path,(mask | 1<<city) , city);
            ans=min(ans,newAns);
        }
    }
    return dp[mask][pos]=ans;
}

int main(){

    int path[10][10]={0,10,50,40,
                      10,0,0,20,
                      50,0,0,30,
                      40,20,30,0

    };

    cout<<tsp(path,1,0);
}

