//
// Created by Saurabh on 1/7/2020.
//

#include<iostream>
#include<list>
#include<vector>

typedef unsigned long long int ll;
using namespace std;



class Graph {

    int V;
    list<int>* adj;

public:
    Graph(int v) {
        V = v;
        adj = new list<int>[V];
    }

    void addEdge(int v, int u, bool birdir = true) {



        adj[v].push_back(u);
        if (birdir) adj[u].push_back(v);
    }

    bool isDetectCycleUtil(int val, bool VisitedAll[], int parent) {

        VisitedAll[val] = true;
        list<int> ::iterator i;
        for (i = adj[val].begin(); i != adj[val].end(); i++) {

            if (!VisitedAll[*i]) {
                isDetectCycleUtil(*i, VisitedAll, val);
            }
            else if (parent != val) return true;

        }

        return false;
    }


    void detectCycle() {

        bool* VisitedAll = new bool[V];
        list<int> ::iterator i;
        for (auto a : *adj) {
            for (i = adj[a].begin(); i != adj[a].end(); i++) {
                if (isDetectCycleUtil(*i, VisitedAll, -1)) {
                    cout << "It has Cycle" << endl;
                }
            }
        }

        cout << "It has no Cycle" << endl;


    }

    void printVertex() {
        list<int> ::iterator i;


        cout<<adj->

//        for (int &a : *adj) {
//            cout << "hi" << endl;
//            cout << a << endl;
//            for (i = adj[a].begin(); i != adj[a].end(); i++) {
//                cout << *i << ":-> ";
//            }
//
//        }
//
//        for(int i=1;i<=28;i++){
//
//            for( int a : adj[i]){
//                cout<< a<<" ";
//            }
//
//        }
    }
};
int main() {

    int totalNodes;
    cin >> totalNodes;

    Graph g(1000);

    vector<int> lit;
    for (int i = 0; i < totalNodes; i++) {
        int temp;
        cin >> temp;
        lit.push_back(temp);
    }

    for (int i = 0; i < totalNodes; i++) {
        for (int j = i + 1; j < totalNodes; j++) {

            if ((lit[i] & lit[j]) > 0) {
                g.addEdge(lit[i], lit[j]);
            }
        }
    }

    g.printVertex();
    //g.detectCycle();




}
