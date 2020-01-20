//
// Created by Saurabh on 1/20/2020.
//

#include<bits/stdc++.h>

using namespace std;

class graph{

    int V;
    list<int> *adjList;


public:
    int destination;
    graph(int v,int d){
        V=v;
        adjList= new list<int>[V];
        destination=d;
    }


    void addEdge(int u, int v){
        adjList[u].push_back(v);
    }
    int count=0;
    void dfs(int s){
        if(s==destination) {
            count++;
            return;
        }
        for(int a : adjList[s]){
            dfs(a);
        }
    }


};
int main(){

    int tCase;
    cin>>tCase;

    while(tCase-->0){

        int n,e;
        cin>>n>>e;
        graph g(n,e);

        while(e-->0){
            int u,v;
            cin>>u>>v;
            g.addEdge(u,v);
        }
        g.dfs(1);
        cout<<g.count<<endl;

    }
}
