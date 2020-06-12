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
unordered_map<int, int> m1;
int solve(vi a, vi b, vi c, vi d) {

	int count = 0;
	int n = a.size();
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			m1[a[i] + b[j]]++;
		}
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			int val = 0 - (c[i] + d[j]);
			auto it = m1.equal_range(val);

			for (auto i = it.first; i != it.second; ++i) {
				count += i->second;
			}

		}
	}

	return count;

}
int32_t main() {

	sg();
	vi a, b, c, d;
	w(x) {
		int x, y, z, s; cin >> x >> y >> z >> s;

		a.pb(x);
		b.pb(y);
		c.pb(z);
		d.pb(s);
	}

	cout << solve(a, b, c, d) << endl;
	return 0;
}
