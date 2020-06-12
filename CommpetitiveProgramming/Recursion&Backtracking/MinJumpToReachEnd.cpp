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

int mn = INT_MAX - 1;

int minReach(vi a, int i, int n, int num) {

	//if(i>n) return INT_MAX;
	if (i == n) return 1;

	for (int k = num; k >= 1; --k) {

		if ((i + k) > n) continue;
		int g = minReach(a, i + k, n, a[i + k]);

		mn = min(mn, g);
	}
	//cout << "value of min:- " << mn << "\n" << "value of i:-" << i << endl;
	return (mn + 1);
}
int32_t main() {

	sg();

	int n; cin >> n;
	vi a(n + 1);
	for (auto &i : a) cin >> i;
	int res = minReach(a, 0, n, a[0]);
	if (res != (INT_MAX)) {
		cout << res + 1  << endl;
	}
	else cout << -1 << endl;

	return 0;
}
