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

int minValue = INT_MAX;
int maxValue = INT_MIN;

void maxAndMin(vi a) {

	for (int i : a) {

		minValue = min(minValue, i);
		maxValue = max(maxValue, i);
	}
}

int multiplyValue(vi a, int n) {


	int ans = 1;

	for (int i = 0; i < n; i++) {

		ans *= a[i];
	}
	return ans;
}

bool timeToCookPrata(vi a, int n, int k , int mid) {

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int v = 1;
		int time = 0;

		while (true) {

			time += a[i] * v;
			v++;

			if (time > mid) break;
			cnt++;

		}


	}
	return (cnt >= k);

}

int prataSolve(vi a, int n, int k)
{
	maxAndMin(a);
	//if (a.size() >= k)return 1;

	// if (a.size() == 1) {
	// 	return (k * (k + 1) / 2);
	// }

	int s = 0;
	int e = (k * (2 * maxValue + (k - 1) * maxValue)) / 2;
	//cout << "Value of s: " << s << " Value of e: " << e << endl;
	int ans = -1;
	while (s <= e) {

		int mid = (s + e) / 2;

		if (timeToCookPrata(a, n, k, mid)) {
			ans = mid;
			e = mid - 1;
			//cout << "Values are: " << mid << " if" << endl;
		}
		else {
			s = mid + 1;
			//cout << "Values are: " << mid << " else" << endl;
		}
	}

	return ans;
}


int32_t main() {

	sg();
	w(x) {
		int k, n; cin >> k >> n;

		vi a(n);
		for (auto &i : a) cin >> i;
		cout << prataSolve(a, n, k) << endl;
	}
	return 0;
}
