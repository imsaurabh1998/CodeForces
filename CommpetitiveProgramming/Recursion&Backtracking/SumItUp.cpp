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


set<vi> list1;
void sumofAll(vi a, vi b, int i, int sum, int T, int N) {

	if (sum == T) {
		// vi temp = b;
		// sort(temp.begin(), temp.end());
		list1.insert(b);
		return;
	}


	if (sum < T) {
		for (int x = 0; x < N ; x++) {
			//if (x > i && a[i] == a[x]) continue;
			b.pb(a[x]);
			//cout << out[j] << endl;
			sumofAll(a, b, i + 1, sum + a[x], T, N);
			b.pback();
		}
	}
	return;

}
int32_t main() {

	sg();

	int n; cin >> n;

	set<int> a;
	vi b, c;
	for (int i = 0; i < n; i++) {
		int k; cin >> k;
		a.insert(k);
	}

	int k; cin >> k;
	for (int temp : a) c.pb(temp);

	sumofAll(c, b, 0, 0, k, n);

	//sort(list1.begin(), list1.end());
	for (vi t : list1) {

		for (int a : t) {
			cout << a << " ";
		}
		cout << endl;
	}
	return 0;
}
