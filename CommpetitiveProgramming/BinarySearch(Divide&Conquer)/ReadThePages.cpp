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

int totalSum(vi a) {

	int res = 0;
	for (int i : a) res += i;

	return res;
}

bool isPossible(vi a, int mid, int s) {

	int res = 0;
	int count = 1;
	int v = 1;

	for (int i = 0; i < a.size(); i++) {

		if (res + a[i] <= mid) {
			res += a[i];
		}
		else {
			res = a[i];
			count++;
		}
	}

	return (count <= s);
}

int pagesNeed(vi a , int student) {

	int s = maxValue(a);
	int e = totalSum(a);
	//cout << s << " " << e << endl;
	int ans = -1;
	while (s <= e) {

		int mid = (s + e) / 2;

		if (isPossible(a, mid, student)) {
			ans = mid;
			e = mid - 1;

		}
		else s = mid + 1;
	}

	return ans;


}
int32_t main() {

	sg();
	int n, s; cin >> n >> s;

	vi a(n);
	for (auto & i : a) cin >> i;


	cout << pagesNeed(a, s) << endl;
	return 0;
}
