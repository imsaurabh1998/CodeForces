//
// Created by Saurabh on 1/21/2020.
//

#include<bits/stdc++.h>

using namespace std;
#define pi pair<int,int>

int d[10005][10005];
char s[10005][10005];
string dir[]={"D","U","L","R"};
int fx[]={0,1,0,-1};
int fy[]={1,0,-1,0};

void dfs(int x,int y){
    memset(d,-1,sizeof(d));
    int sx=x;
    int sy=y;
    queue<pi> q;
    q.push({x,y});

    while(!q.empty()){

        pi tp=q.front();
        q.pop();
        for(int i=0;i<4;i++){

            int x=fx[i]+tp.first;
            int y=fy[i]+tp.second;

            if(s[x][y]=='.' && d[x][y]==-1){
                d[x][y]=d[tp.first][tp.second]+1;
                q.push({x,y});
            }
        }
    }
}


int main(){

    int n,m,k;
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
            cin>>s[i][j];

        }
    }

    dfs(Sx,Sy);

    if(k&1) cout<<"IMPOSSIBLE\n";
    else{
        string ss;
        while(k){
            int f=0;
            for(int i=0;i<4;i++){
                int x=fx[i]+Sx;
                int y=fy[i]+Sy;
                if(s[x][y]=='.' && d[x][y]<=k){
                    Sx=x; Sy=y;
                    ss+=dir[i];
                    f=1;
                    break;
                }

            }

            if(!f) cout<<"IMPOSSIBLE\n";
            k--;
        }
        cout<<ss<<endl;
    }

}
