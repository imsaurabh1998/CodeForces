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

int generateParan(int n) {
	if (n == 1) return 2;
	if (n == 2) return 3;

	int a[100] = {0}, b[100] = {0};

	a[2] = 3;
	b[2] = 2;

	for (int i = 3; i <= n; i++) {

		a[i] = a[i - 1] + b[i - 1];
		b[i] = a[i - 1];
	}

	return a[n];
}

int32_t main() {

	sg();
	int i = 1;
	w(x) {
		int n; cin >> n;
		cout << "#" << i++ << " : " <<  generateParan(n) << endl;

	}
	return 0;
}
