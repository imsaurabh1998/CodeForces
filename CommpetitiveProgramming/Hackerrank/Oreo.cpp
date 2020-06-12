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
#define mod 998244353 //1e9+7
#define inf 1e18
#define ps(x,y) fixed<<setpresicion(y)<<x
#define mk(arr,n,type) type *arr=new type[n]
#define w(x) int x;cin>>x; while(x--)
#define rg 1000005
//mt19937  ring(chrono: stready_clock::now().time_since_epoch().count)

int Hash[1000007] = {0};
const int MAXB = (1 << 20) + 10;
int freq[MAXB];

void  queryHashing() {

	//qHash[x]++;
	// int count = (Hash[x] != 0) ? 1 : 0;
	// int safe = x;
	// while (safe) {

	// 	int p = safe & (-safe);
	// 	cout << "Value of p: " << p << endl;
	// 	if (Hash[p] != 0 && p != x)  count++; 		//qHash[x]++;
	// 	safe -= p;
	// }
	// return count;


	for (int i = 0; i <= 19; i++) {

		for (int mask = 0; mask <= ( (1 << 20) - 1); mask++) {

			if (mask & (1 << i)) {
				freq[mask] +=   freq[mask ^ (1 << i)];
			}
		}
	}
}

void valueHash(vi a) {

	for (int i : a) {
		freq[i]++;
		//cout << freq[i] << endl;
	}

}

int pow(int a, int n, int m) {

	int res = 1;

	while (n) {
		if (n & 1) {
			res *= a % m;
			res %= m;
		}

		a = (a * a) % m;
		n >>= 1;
	}

	return res % m;
}

int fermat(int a, int m) {
	return pow(a, m - 2, m);
}

void sg() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int32_t main() {

	sg();
	int n, q; cin >> n >> q;

	vi a(n);
	for (auto &i : a) cin >> i;
	vi query(q);
	for (auto &i : query) cin >> i;

	int inverseModValue = fermat(n, mod);
	//cout << "inverseModValue: " << inverseModValue << endl;
//729486258
	valueHash(a);
	queryHashing();
	for (int i : query) {


		//cout << "value of query " << i << " : " << totalORval << endl;
		//cout << "Value of freq " << i << " : " << freq[i] << endl;
		int result = (freq[i] * inverseModValue) % mod;
		cout << result << endl;

	}
	return 0;
}
