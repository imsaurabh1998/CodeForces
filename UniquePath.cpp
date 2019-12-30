//
// Created by Saurabh on 12/30/2019.
//


#include<bits/stdc++.h>


using namespace std;
void totalPath(int R, int C, int rCount, int cCount);
int ans=0;
void totalPath(int R, int C, int rCount, int cCount){

    if(R==rCount && C==cCount) {
        ans++;
        return;
    }

    if(C==cCount)  totalPath(R,C, rCount+1, cCount);
    else if(R==rCount)  totalPath(R,C,rCount,cCount+1);
    else {
        totalPath(R, C, rCount, cCount + 1);
        totalPath(R, C, rCount + 1, cCount);
    }


}
int main(){

    int m=7;
    int n=3;

    totalPath(n-1,m-1,0,0);
    cout<<ans;
}

