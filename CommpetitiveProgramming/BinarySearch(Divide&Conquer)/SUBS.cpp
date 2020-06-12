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

bool isPossible(string a, string b, int m, int n, int mid) {


	string res;
	for (int i = 0; i < m; i++) {
		char t = a[i];
		for (int j = 0; j < mid; j++) {
			res += t;
		}
	}
	cout << "Value of resultant: " << res << " " << mid << endl;
	for (int i = 0; i < n - m; i++) {
		string s = b.substr(i, res.length());
		if (s == res) return true;
	}

	return false;
}
int solve(string a, string b) {

	int ans = 0;
	if (a.length() > b.length()) return 0;
	else if (a == b) return 1;
	else {

		int m = a.length();
		int n = b.length();

		int s = 0;
		int e = n / m + 1;

		while (s <= e) {

			int mid = (s + e) / 2;

			if (isPossible(a, b, m, n, mid)) {
				ans = mid;
				s = mid + 1;
			}
			else e = mid - 1;
		}
	}

	return ans;

}

int32_t main() {

	sg();
	w(x) {
		string a, b;
		cin >> a >> b;

		cout << solve(a, b) << endl;
	}
	return 0;
}
