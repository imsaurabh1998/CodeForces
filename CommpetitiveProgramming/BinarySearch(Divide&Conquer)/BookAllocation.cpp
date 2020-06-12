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
int ans = 0;
int maxValue(vi a) {

	int val = INT_MIN;

	for (int s : a) {

		val = max(val, s);
	}
	return val;
}
int allBookSum(vi a) {

	int sum = 0;
	for (int temp : a) {

		sum += temp;
	}

	return sum;
}

bool bookAllocateToStudent(vi a, int mid, int k, int n) {

	int tSum = 0;
	int cnt = 1;
	for (int i = 0; i < n; i++) {

		tSum += a[i];
		if (tSum > mid) {
			cnt++;
			tSum = a[i];
		}
	}

	if (cnt <= k) return true;
	return false;
}
int bookAllocation(vi a, int k, int n) {

	if (k > a.size())return -1;

	int s = 0;
	int e = allBookSum(a);
	ans = maxValue(a);
	//cout << ans << endl;
	s = ans;
	while (s <= e) {

		int mid = (s + e) / 2;

		bool allocateBook = bookAllocateToStudent(a, mid, k, n);

		if (allocateBook) {
			ans = mid;
			e = mid - 1;
		}
		else s = mid + 1;
	}
	return ans;
}
int32_t main() {

	sg();
	w(x) {
		int n, k; cin >> n >> k;
		vi a(n);
		for (auto & i : a) cin >> i;
		//sort(a.begin(), a.end());
		//cout << allBookSum(a) << endl;
		cout << bookAllocation(a, k, n) << endl;

	}
	return 0;
}
