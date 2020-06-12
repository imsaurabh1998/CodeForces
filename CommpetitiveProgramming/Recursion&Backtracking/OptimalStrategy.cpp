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
int A[2003][2003] = {0};

int gameStrategy(vi a, int i, int j) {

	if (i == j) return a[i];
	//if (i < j) return 0;
	if (j == i + 1 )  {
		return max(a[i], a[j]);
	}

	if (A[i][j] != 0) return A[i][j];
	int res = 0;
	res = max(a[i] + min(gameStrategy(a, i + 2, j), gameStrategy(a, i + 1 , j - 1)),
	          a[j] + min(gameStrategy(a, i + 1 , j - 1), gameStrategy(a, i, j - 2))
	         );

	A[i][j] = res;


	return res;

}
int solve(vi a) {

	return gameStrategy(a, 0, a.size() - 1);
}

int32_t main() {

	sg();

	int n; cin >> n;
	vi a(n);
	for (auto  &i : a) cin >> i;
	cout << solve(a);

	return 0;
}
