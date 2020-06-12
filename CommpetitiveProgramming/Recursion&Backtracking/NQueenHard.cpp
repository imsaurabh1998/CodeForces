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

int c = 0;
int col[30] = {0};
int d1[40] = {0};
int d2[40] = {0};
bool NQueen( int r, int n, int &ans) {

	if (r == n) {
		ans++;

		// we can print matrix a here
		return false;
	}

	for (int c = 0; c < n; c++) {

		if (col[c] == 0 && d1[r - c + n - 1] == 0 && d2[r + c] == 0) {

			col[c] = d1[r - c + n - 1] = d2[r + c] = 1;
			//a[r][c] = 1;
			bool next = NQueen( r + 1, n, ans);
			if (next) return true;
			//a[r][c] = 0;
			col[c] = d1[r - c + n - 1] = d2[r + c] = 0;
		}
	}

	return false;

}

int32_t main() {

	sg();

	int n; cin >> n;

	//int a[20][20] = {0};
	int ans = 0;
	NQueen( 0,  n, ans);
	cout << ans << endl;

	return 0;
}
