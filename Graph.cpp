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
        adjList = new list<int>[V];
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

    void bfs(int src,int des){

        queue<int> queue;
        bool *visited= new bool[V]{0};
        int *parent =new int[V+1];
        int *path=new int[V+1]{0};

        for(int i=0;i<V;i++){
            parent[i]=-1;
        }

        queue.push(src);
        visited[src]=true;
        while(!queue.empty()){
            int val =queue.front();
            cout<<val<<",";
            queue.pop();

            for( int v : adjList[val]){
                if(!visited[v]) {
                    queue.push(v);
                    visited[v]=true;
                    path[v]=path[val]+1;
                    parent[v]=val;
                }
            }

        }

        cout<<"Shortest path "<<path[des]<<endl;

        int temp=des;
        while(temp!=-1){
            cout<<temp<<"<--";
            temp=parent[temp];
        }
    }

    void snake_ladder(){
        int board[50]={0};
        board[2]=13;
        board[5]=2;
        board[32]=-2;
        board[9]=18;
        board[17]=-13;
        board[24]=-8;
        board[18]=11;
        board[20]=-14;
        board[24]=-8;
        board[25]=-10;
        board[32]=-2;
        board[34]=22;

        Graph snakeG(100);

        for(int u=0;u<36;u++){

            for(int dice=1;dice<=6;dice++){
                if(u+dice<=36) {
                    int v = u + dice + board[u + dice];
                    snakeG.addEdge(u, v, false);
                }
            }
        }

        snakeG.bfs(0,36);
    }
};

int main(){
    Graph g(5);

//    g.addEdge(0,1);
//    g.addEdge(0,2);
//    g.addEdge(1,0);
//    g.addEdge(1,3);
//    g.addEdge(3,2);
//    g.addEdge(3,1);
//    g.addEdge(3,4);
//    g.addEdge(2,3);
//    g.addEdge(2,0);
//    g.addEdge(4,3);
//
//
//    //g.printGraph();
//    g.bfs(0,4);


    g.snake_ladder();

}

