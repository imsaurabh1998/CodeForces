//
// Created by SAURABH on 05-04-2020.
//

#include<bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define int long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<vector<int>>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi,greater<int>>
#define setbits(x) __buitin_popcountll(x)
#define zrobits(x) __buitln_ctzll(x)
#define mod 1000000009 //1e9+7
#define inf 1e18
#define ps(x,y) fixed<<setpresicion(y)<<x
#define mk(arr,n,type) type *arr=new type[n]
#define w(x) int x;cin>>x; while(x--)
//mt19937  ring(chrono: stready_clock::now().time_since_epoch().count)


void sg() {

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {

    //sg();
    int n;
    cin >> n;
    mk(arr, n, int);
    vii vec;

    for (int i = 0; i < n; i++) cin >> arr[i];
    vi vInt;
    sort(arr, arr + n);

    map<int, pii> m;

    for (int i = 0; i < n - 1; i += 2) {

        int x = arr[i] ^ arr[i + 1];

        if (m.find(x) == m.end()) {
            m[x] = {arr[i], arr[i + 1]};
        } else {
            vInt.pb(m[x].ff);
            vInt.pb(m[x].ss);
            vInt.pb(arr[i]);
            vInt.pb(arr[i + 1]);

            vec.push_back(vInt);
            vInt.clear();
            m.erase(x);
        }
    }

    for (vi a : vec) {

        for (int num : a) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
