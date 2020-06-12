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
#define deg(v) cout<<"Value is: "<<v<<endl;
//mt19937  ring(chrono: stready_clock::now().time_since_epoch().count)


void sg() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int a[100006];
int n;
int lazy[400006];

int tree[400006][3];

void process_nodes(int node, int v) {

	if (v == 0) tree[node][0]++;

	while (v % 2 == 0 && v != 0) {
		tree[node][1]++;
		v /= 2;
	}

	while (v % 5 == 0 && v != 0) {
		tree[node][2]++;
		v /= 5;
	}
	return;
}

void build(int node, int s, int e) {

	if (s == e) {
		process_nodes(node, a[s]);
		return;
	}

	int m = (s + e) >> 1;
	build(node << 1, s, m);
	build(node << 1 | 1, m + 1, e);

	for (int i = 0; i < 3; i++) {

		tree[node][i] = tree[node << 1][i] + tree[node << 1 | 1][i];
	}

	return;
}

void update(int node, int s, int e, int l, int r, int v) {

	if (lazy[node] != -1) {

		process_nodes(node, lazy[node]);

		for (int i = 0; i < 3; i++) {
			tree[node][i] *= (e - s + 1);
		}

		if (s != e) {

			lazy[node << 1] = lazy[node << 1 | 1] = lazy[node];
		}
	}

	if (e < r || e < l) return;

	if (l <= s and e <= r) {

		process_nodes(node, v);
		for (int i = 0; i < 3; i++) {
			tree[node][i] *= (e - s + 1);
		}


		if (s != e) {

			lazy[node << 1] = lazy[node << 1 | 1] = v;
		}

		return;
	}

	int m = (s + e) >> 1;

	update(node << 1, s, m, l, r, v);
	update(node << 1 | 1, m + 1, e, l, r, v);

	for (int i = 0; i < 3; i++) {
		tree[node][i] = tree[node << 1][i] + tree[node << 1 | 1][i];
	}

	return;

}

int query(int node, int s, int e, int l, int r) {

	if (lazy[node] != -1) {

		process_nodes(node, lazy[node]);

		for (int i = 0; i < 3; i++) {
			tree[node][i] *= (e - s + 1);
		}

		if (s != e) {

			lazy[node << 1] = lazy[node << 1 | 1] = lazy[node];
		}
	}

	if (e < r || e < l) return INT_MIN;

	if (l <= s and e <= r) {

		if (tree[node][0] != 0) return 0;
		return min(tree[node][1], tree[node][2]);
	}

	int m = (s + e) >> 1;

	int left = query(node << 1, s, m, l, r);
	int right = query(node << 1 | 1, m + 1, e, l, r);

	for (int i = 0; i < 3; i++) {

		tree[node][i] = tree[node << 1][i] + tree[node << 1 | 1][i];
	}

	if (tree[node][0] != 0) return 0;

	return min(tree[node][1], tree[node][2]);

}

int32_t main() {

	sg();
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int m; cin >> m;

	int s = 1;
	int e = n;

	while (m--) {

		int i, l, r, v; cin >> i;

		if (i == 1) {
			cin >> l >> r;
			cout << query(1, s, e, l, r) << endl;

		} else {
			cin >> l >> r >> v;
			update(1, s, e, l, r, v);
		}
	}

	return 0;
}
