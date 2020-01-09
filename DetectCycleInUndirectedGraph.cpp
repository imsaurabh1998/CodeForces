//
// Created by SAURABH on 09-01-2020.
//

// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
/* This function is used to detect a cycle in undirected graph
*  adj[]: array of vectors to represent graph
*  V: number of vertices
*/

bool isCycleDetect(vector<int> adj[] ,int i,bool VisitedAll[],int parent){

    VisitedAll[i]=true;

    for(int a : adj[i]){

        if(!VisitedAll[a]){
            if(isCycleDetect(adj,a,VisitedAll, i)) return true;
        } else if(a!=parent) return true;
    }
    return false;

}
bool isCyclic(vector<int> adj[], int V)
{
    // Your code here

    bool *VisitedAll=new bool[V];
    for(int i=0;i<V;i++){

        if(isCycleDetect(adj,i,VisitedAll,-1)) return true;

    }

    return false;

}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;

        // array of vectors to represent graph
        vector<int> adj[V];

        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;

            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}
// } Driver Code Ends
