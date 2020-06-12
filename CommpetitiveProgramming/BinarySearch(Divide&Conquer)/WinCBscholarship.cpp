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
bool PossibleToGiveScholarship(int n, int m, int x, int y, int mid) {

	return ((mid * x) <= m + (n - mid) * y);
}

int totalScholarship(int n, int m, int x, int y) {


	int s = 0;
	int e = n;
	int ans = 0;
	while (s <= e) {

		int mid = (s + e) / 2;

		if (PossibleToGiveScholarship(n, m, x, y, mid)) {
			ans = mid;
			s = mid + 1;

		}
		else e = mid - 1;
	}
	return ans;
}

int32_t main() {

	sg();

	int n, m, x, y; cin >> n >> m >> x >> y;
	cout << totalScholarship(n, m, x, y) << endl;

	return 0;
}
