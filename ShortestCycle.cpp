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
        vector<int> *lit =&adj;



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




//#include <map>
//#include <set>
//#include <cmath>
//#include <ctime>
//#include <deque>
//#include <queue>
//#include <stack>
//#include <bitset>
//#include <cctype>
//#include <cstdio>
//#include <vector>
//#include <cassert>
//#include <complex>
//#include <cstdlib>
//#include <cstring>
//#include <fstream>
//#include <iomanip>
//#include <sstream>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define int long long
//
//const int N = 1e5 + 23, inf = N + N;
//int a[N];
//vector <int> adj[N];
//vector < pair <int, int> > edg;
//queue <int> q;
//bool was[N];
//int dis[N];
//
//int go()
//{
//    int ret = inf;
//    for (pair <int, int> p : edg)
//    {
//        memset(was, 0, sizeof(was));
//        for (int i = 0; i < N; i++)
//            dis[i] = inf;
//
//        int u = p.first, v = p.second;
//        q.push(u);
//        dis[u] = 0;
//        while (!q.empty())
//        {
//            int s = q.front();
//            if (s == v)
//                break;
//            q.pop();
//            for (int t : adj[s])
//            {
//                if ((s == u and t == v) or (s == v and t == u))
//                    continue;
//                if (was[t])
//                    continue;
//                was[t] = true;
//                dis[t] = dis[s] + 1;
//                q.push(t);
//            }
//        }
//        while (!q.empty())
//            q.pop();
//        if (dis[v] < inf)
//            ret = min(ret, dis[v] + 1);
//    }
//    if (ret == inf)
//        ret = -1;
//    return ret;
//}
//
//#undef int
//int main()
//{
//#define int long long
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int n; cin >> n;
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//
//    for (int j = 0; j < 64; j++)
//    {
//        vector <int> cur;
//        for (int i = 0; i < n; i++)
//            if ((a[i] >> j) & 1)
//                cur.push_back(i);
//        int sz = (int)cur.size();
//        if (sz >= 3)
//        {
//            cout << "3\n";
//            return 0;
//        }
//        if (sz == 2)
//        {
//            int u = cur[0], v = cur[1];
//            adj[u].push_back(v);
//            adj[v].push_back(u);
//            edg.push_back(make_pair(u, v));
//        }
//    }
//
//    int ret = go();
//    cout << ret << "\n";
//    return 0;
//}
