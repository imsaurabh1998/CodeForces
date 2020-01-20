//
// Created by SAURABH on 17-01-2020.
//

#include<bits/stdc++.h>
using namespace std;
class DirectGraph {

    int V;
    list<int> *adj;
    int w[100][100];
    map<int,int> m;
    int source,destination;


public:

    int minNode=INT_MAX;
    DirectGraph(int v){
        V=v;
        adj=new list<int> [V];
    }


    void addEdge(int u, int v,int weight){

        adj[u].push_back(v);
        w[u][v]=weight;
    }

    void SDmap(int s, int d, map<int,int>ma){
        source=s;
        destination=d;
        m=ma;
    }


    void totalPath(int v,int pevNode,bool sVertex,bool twoAdj, int totalNodes){

        if(v==destination){
            if(twoAdj){
                if(sVertex) {
                    minNode=min(minNode,totalNodes);
                    return;
                }
            }
            return;
        }

        for(int a : adj[v]){

            if(!twoAdj) {
                int te=w[v][a];
                if((0.5*pevNode)<=te && te<=(2*pevNode)) twoAdj=true;
            }
            pevNode=w[v][a];
            if(!sVertex){
                if(m.find(pevNode)!=m.end()) sVertex=true;
            }
            totalPath(a,pevNode,sVertex,twoAdj,totalNodes++);

        }
    }
    int minPath(){


            bool sV=m.find(source)!=m.end()? true: false;
            totalPath(source,0,sV,false,1);
        }
    }
};


int main(){

    int v,u;
    cin>>v>>u;

    DirectGraph dG(v);

    int ver, edg,weight;
    while(v-->0){
        cin>>ver>>edg>>weight;
        dG.addEdge(ver,edg,weight);
    }

    int k;
    cin>>k;
    map<int,int> m;
    while(k-->0){

        int kVal;
        cin>>kVal;
        m[kVal]++;
    }

    int source,destination;
    cin>>source>>destination;

    dG.SDmap(source,destination,m);

    dG.minPath();
    cout<<dG.minNode<<endl;
}

