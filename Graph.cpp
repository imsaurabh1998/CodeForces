//
// Created by SAURABH on 30-12-2019.
//
#include<bits/stdc++.h>
using namespace std;

class Graph{

    int V;
    list<int> *adjList;
public:
    Graph(int v){
        V=v;
        adjList =new list<int>[V];
    }

    void addEdge(int u, int v,bool biDir=true){
        adjList[u].push_back(v);
        if(biDir)
            adjList[v].push_back(u);
    }

    void printGraph(){

        for(int i=0;i<V;i++){
            cout<<i<<"-->";
            for(int a : adjList[i]) {
                cout << a << ",";
            }


            cout<<endl;
        }
    }
};

int main(){
    Graph g(3);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,0);
    g.addEdge(1,3);
    g.addEdge(3,2);
    g.addEdge(3,1);
    g.addEdge(2,3);
    g.addEdge(2,0);

    g.printGraph();



}

