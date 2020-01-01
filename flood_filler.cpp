//
// Created by SAURABH on 31-12-2019.
//

#include<bits/stdc++.h>

using namespace std;
int R,C;

class Graph {

    int V;
    list<int> *adjList;
public:
    Graph(int v) {
        V = v;
        adjList = new list<int>[V];
    }

    void addEdge(int u, int v, bool biDir = true) {
        adjList[u].push_back(v);
        if (biDir)
            adjList[v].push_back(u);
    }




};

void floodFiller(int mat[][50],int i,int j, int chr){

    if(i>=0|| j>=0 || i<=R|| j<=C  ||mat[i][j]!=chr  ) return;

    mat[i][j]='R';

    floodFiller(mat,i+1,j,chr);
    floodFiller(mat,i,j+1,chr);
    floodFiller(mat,i-1,j,chr);
    floodFiller(mat,i,j-1,chr);
}

void print(int mat[][50]){

    for(int i=0;i<R;i++){

        for(int j=0;j<C;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
}
int main(){

   int mat[50][50];

   int R,C;
   cin>>R>>C;

   for(int i=0;i<R;i++){
       for(int j=0;j<C;j++){
           cin>>mat[i][j];
       }
   }

   floodFiller(mat,8,13,'.');
   print(mat);

}