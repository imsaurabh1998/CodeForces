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
int maxValue(vi a) {

	int Val = INT_MIN;
	for (int i : a) {
		Val = max(Val, i);
	}
	return Val;
}

bool isPossible(vi a, int p, int mid) {


	int count = 0;
	int res = 0;

	for (int i : a) {
		int v = 1;
		res = 0;
		while (true) {

			res += i * v;
			v++;
			if (res > mid) break;
			count++;
		}
	}

	return (count >= p);
}

int murtualParathas(vi a, int p) {


	int s = 0;
	int mx = maxValue(a);

	int e = (p * (2 * mx + (p - 1) * mx)) / 2;
	int ans = -1;
	while (s <= e) {

		int mid = (s + e) / 2;

		if (isPossible(a, p, mid)) {
			ans = mid;
			e = mid - 1;
		} else s = mid + 1;
	}
	return ans;
}
int32_t main() {

	sg();
	int p,  c; cin >> p >> c;

	vi a(c);
	for (auto &i : a) cin >> i;
	cout << murtualParathas(a, p) << endl;
	return 0;
}
