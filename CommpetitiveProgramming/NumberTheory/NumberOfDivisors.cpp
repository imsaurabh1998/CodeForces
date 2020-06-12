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
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi,greater<int>>
#define setbits(x) __buitin_popcountll(x)
#define zrobits(x) __buitln_ctzll(x)
#define mod 1000000007 //1e9+7
#define inf 1e18
#define ps(x,y) fixed<<setpresicion(y)<<x
#define mk(arr,n,type) type *arr=new type[n]
#define w(x) int x;cin>>x; while(x--)
//mt19937  ring(chrono: stready_clock::now().time_since_epoch().count)


void sg() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vi allPrimeFactor;

void factors() {

	int a[100005];

	memset(a, 0, sizeof(a));

	for (int i = 3; i <= 100005; i += 2) a[i] = 1;

	a[0] = 0;
	a[1] = 0;
	a[2] = 1;

	for (int i = 3; i <= 100005; i += 2) {

		if (a[i]) {
			for (int j = i * i; j <= 100005; j += i) {
				a[j] = 0;
			}
		}
	}

	allPrimeFactor.pb(2);
	for (int i = 3; i <= 100005; i += 2) {

		if (a[i]) allPrimeFactor.pb(i);
	}
}
int factor[100005] = {0};
unordered_map<int, int> mList;
void primeFactor(int a) {

	int pos = 0;
	int p = allPrimeFactor[pos];
	int m = a;
	while (p * p <= a) {

		while (m % p == 0) {
			mList[p]++;
			m /= p;
		}

		p = allPrimeFactor[++pos];
	}
	if (m > 1) mList[m]++;
}

int totalDiv(vi a) {

	for (int val : a) primeFactor(val);

	// for (int i = 0; i <= 100; i++) {
	// 	cout << factor[i] << " ";
	// }
	// cout << endl;

	int result = 1;
	// result *= factor[2] + 1;
	// for (int i = 3; i <= 100005; i += 2) {
	// 	if (factor[i] > 0) {
	// 		result *= factor[i] + 1;
	// 		result %= mod;
	// 	}
	// }
	// return result % mod;

	unordered_map<int, int> :: iterator itr;

	for (itr = mList.begin(); itr != mList.end(); itr++) {

		result *= (itr->ss) + 1;
		result %= mod;
	}
	return result % mod;

}


int32_t main() {

	//sg();
	factors();
	w(x) {
		memset(factor, 0, sizeof(factor));
		mList.clear();
		int n; cin >> n;
		vi list(n, 0);
		for (auto &i : list) cin >> i;

		cout << totalDiv(list) << endl;
		list.clear();
	}
	return 0;
}
