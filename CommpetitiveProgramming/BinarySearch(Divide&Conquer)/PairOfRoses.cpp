#include<bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define int long long
#define pb push_back
#define pback pop_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vis vector<string>
#define vii vector<vector<int>>
#define mii map<int, int>
#define umii unordered_map<int,int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi,greater<int>>
#define setbits(x) __buitin_popcountll(x)
#define zrobits(x) __buitln_ctzll(x)
#define mod 1000000007 //1e9+7
#define inf 1e18
#define ps(x,y) fixed<<setpresicion(y)<<x
#define mk(arr,n,type) type *arr=new type[n]
#define w(x) int x;cin>>x; while(x--)
#define rg 1000005
//mt19937  ring(chrono: stready_clock::now().time_since_epoch().count)


void sg() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

pii solve(vi a, int n, int k) {

	map<int, int> m;
	pii res = { -1, -1};
	for (int i = 0; i < n; i++) {

		int val = a[i];

		int target = k - a[i];
		if (m.find(target) != m.end()) {
			if (res.ff != -1 && res.ss != -1) {
				int oldDiff = abs( a[res.ss] - a[res.ff]);
				int newDiff = abs(a[i] - target);

				// int oldDiff = abs( a[res.ss] - a[res.ff]);
				// int newDiff = abs(a[i] - a[m[target]]);
				if (oldDiff > newDiff) {
					res.ss = i;
					res.ff = m[target];
				}
			} else {
				//cout << "Value of i " << i << " res :" << m[target] << endl;
				res.ss = i;
				res.ff = m[target];
			}
		}
		else {
			m[a[i]] = i;
		}
	}

	return res;
}

int32_t main() {

	sg();
	w(x) {
		int n; cin >> n;

		vi a(n);
		for (auto & i : a)cin >> i;
		int k; cin >> k;

		pii res = solve(a, n, k);

		cout << "Deepak should buy roses whose prices are " << min(a[res.ff], a[res.ss]) << " and " << max(a[res.ff], a[res.ss]) << "." << endl;
	}
	return 0;
}
