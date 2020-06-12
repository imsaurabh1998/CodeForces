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
vi a(20);
void bubble_sort( int n) {

	if (n == 1)return;

	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) {
			swap(a[i], a[i + 1]);
		}
	}

	bubble_sort( n - 1);
}

void bubble_sort1(int j, int n) {

	if (n == 1) return;

	if (j == (n - 1)) {
		return bubble_sort1(0, n - 1);
	}

	if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
	//cout << "Values are " << a[j] << " " << a[j + 1] << endl;

	bubble_sort1(j + 1, n);
	return;
}

int32_t main() {

	sg();
	w(x) {
		int n; cin >> n;


		for (auto &i : a) cin >> i;

		bubble_sort1(0, n);
		for (int a : a)cout << a << " ";
		cout << endl;
	}
	return 0;
}
