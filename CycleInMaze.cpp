//
// Created by Saurabh on 1/21/2020.
//

#include<bits/stdc++.h>

using namespace std;
#define pi pair<int,int>

int d[1005][1005];
char s[1005][1005];
char dir[4] = { 'D','L','R','U' };
int fx[] = { 1,0,0,-1 };
int fy[] = { 0,-1,1,0 };

void dfs(int x,int y){
    memset(d,-1,sizeof(d));
    int sx=x;
    int sy=y;
    d[x][y]=0;
    queue<pi> q;
    q.push({x,y});

    while(!q.empty()){

        pi tp=q.front();
        q.pop();
        for(int i=0;i<4;i++){

            int x=fx[i]+tp.first;
            int y=fy[i]+tp.second;

            if(x>-1 && y>-1 && s[x][y]=='.' && d[x][y]==-1){
                d[x][y]=d[tp.first][tp.second]+1;
                q.push({x,y});
            }
        }
    }
}


int main(){

    int n,m,k;
    cin>>n>>m>>k;

    char temp;
    int Sx,Sy;
    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){
            cin>>temp;

            if(temp=='X') {
                Sx=i;
                Sy=j;
                s[i][j]='.';
            }
           else  s[i][j]=temp;

        }
    }



    if(k&1) {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    dfs(Sx,Sy);
        string ss;
        while(k){
            int f=0;
            for(int i=0;i<4;i++){
                int x=fx[i]+Sx;
                int y=fy[i]+Sy;
                if(x>-1 && y>-1 && s[x][y]=='.' && d[x][y]<=k){
                    Sx=x; Sy=y;
                    ss+=dir[i];
                    f=1;
                    break;
                }

            }

            if(!f) {
                cout << "IMPOSSIBLE\n";
                return 0;
            }
            k--;
        }
        cout<<ss<<endl;


}
