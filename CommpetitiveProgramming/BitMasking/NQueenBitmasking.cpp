//
// Created by SAURABH on 23-03-2020.
//

#include<bits/stdc++.h>

using namespace std;

int ans=0,DONE=0;
void nQueen(int rowMask, int rd, int ld){
    if(DONE==rowMask) {
        ans++;
        return ;
    }

    int dist=DONE& ~(rowMask|rd|ld);
    while(dist){
        int p =dist&(-dist);
        dist=dist-p;
        nQueen(rowMask|p, (rd|p)>>1,(ld|p)<<1);
    }

}
int main(){
  int n;
  cin>>n;
  DONE=(1<<n)-1;

  nQueen(0,0,0);
  cout<<ans<<endl;

  int z=(1<<32);

}