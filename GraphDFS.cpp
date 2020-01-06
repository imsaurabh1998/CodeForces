//
// Created by SAURABH on 03-01-2020.
//
#include<bits/stdc++.h>
using namespace std;

bool visited[50];
vector<int > adj[20];

void dfs(int s){

    visited[s]=true;

    for(int i=0;i<adj[s].size();i++) {
        if (visited[adj[s][i]] == false) {
                dfs(i);
        }
    }
}

int main(){

    int nodes, edges,x,y;

    cin>>nodes>>edges;

    list<int,int> g;

    for(int i=0;i<edges;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int comp=0;
    for(int i=1;i<=nodes;i++){

        if(visited[i]==false){
            dfs(i);
            comp++;
        }
    }

    cout<<"total COunt:-" <<comp<<endl;

}
