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
#define mod 1000000009 //1e9+7
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
bool subset(vi a, int i, int sum, int n) {

	if (sum == 0 && i != 0) {
		cout << "Yes" << endl;
		return true;
	}

	bool v = false;
	if (i < n) {
		v = subset(a, i + 1, sum + a[i], n);
		if (v) return true;
	}

	if (i + 1 < n) {
		v = subset(a, i + 2, sum + a[i + 1], n);
		if (v) return true;
	}

	return false;
}

int32_t main() {

	sg();
	w(x) {
		int n; cin >> n;

		vi a(n);
		bool zero = false;
		bool neg = false;
		int c;
		for (int i = 0; i < n; i++) {
			cin >> c;
			if (c == 0) zero = true;
			if (c < 0) neg = true;
			a[i] = c;
		}

		if (zero) {
			cout << "Yes" << endl;
			continue;
		}
		if (!neg) {
			cout << "No" << endl;
			continue;
		}
		bool res = subset(a, 0, 0, n);
		if (!res) cout << "No" << endl;
	}
	return 0;
}
