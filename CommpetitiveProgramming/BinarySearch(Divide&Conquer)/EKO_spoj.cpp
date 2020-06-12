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
int maxValue = INT_MIN;
int minValue = INT_MAX;
void MaxAndMinValue(vi a) {

	for (int s : a) {
		maxValue = max(maxValue, s);
		minValue = min(minValue, s);
	}
}

bool isPossible(vi a, int n, int k, int mid) {

	int remWood = 0;

	for (int i = 0; i < n; i++) {

		if (a[i] - mid > 0) {
			remWood += a[i] - mid;
		}
	}
	//cout << "RemWood Size: " << remWood << endl;
	if (remWood >= k) return true;
	return false;

}

int woodSize(vi a, int n, int k) {

	MaxAndMinValue(a);
	int s = minValue;
	int e = maxValue  ;
	//cout << e << endl;
	int ans = 0;
	while (s <= e) {

		int mid = (s + e) / 2;
		//cout << "midValue: " << mid << endl;
		if (isPossible(a, n, k, mid)) {
			ans = mid;
			s = mid + 1;
		}
		else e = mid - 1;
	}

	return ans;
}

int32_t main() {

	sg();

	int n, m; cin >> n >> m;
	vi a(n);

	for (auto  &i : a) cin >> i;
	cout << woodSize(a, n, m) << endl;

	return 0;
}
