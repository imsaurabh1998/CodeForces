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
int fact(int n) {

	if (n > 12) return INT_MAX;

	int f = 1;
	for (int i = 2; i <= n; i++) {
		f *= i;
	}

	return f;
}

string kPermu(int k, vi list) {

	int n = list.size();
	if (n == 0 || k > fact(k)) return "";

	int f = fact(n - 1);

	int pos = k / f;
	k %= f;

	string s = to_string(list[pos]);
	list.erase(list.begin() + pos);
	return s + kPermu(k, list);
}

int32_t main() {

	sg();

	int n, k; cin >> n >> k;
	vi a;
	for (int i = 1; i <= n; i++) {
		a.pb(i);
	}

	cout << kPermu(k - 1, a) << endl;


	return 0;
}
