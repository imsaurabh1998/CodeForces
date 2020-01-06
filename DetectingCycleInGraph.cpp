//
// Created by SAURABH on 05-01-2020.
//

#include<bits/stdc++.h>

using namespace std;

class Graph{
    int V;
    list<int> *adj;

public :
    Graph(int v){
    V=v;
    adj=new list<int> [V];
    }

    void addEdge(int v, int u){

        adj[v].push_back(u);
        adj[u].push_back(v);
        }



};

bool Graph:: detectCycleUtil(list<int> list, int s, bool visited, int parent){

    visited[s]=true;

    for(int i=0;i<list[s].size();i++){

        if(!visited[adj[s][i]]){
            if(detectCycleUtil(list,list[s][i],visited,s)) return true;
        }

        else if(list[s][i]!=parent) return true;
    }

    return false;

}


void Graph:: detectCycle(){
    bool * visited=new bool[V];
    for(int i=0;i<5;i++){

        if(detectCycleUtil(adj,i,visited,-1)){
            cout<<"Yess!! It has cycle"<<endl;
            return;
        }
    }
    cout<<"Oops!! There is no cycle"<<endl;


}

int main(){
    Graph g(5);
}
