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
#define degd(v) cout<<v<<" ";
#define c(s) cout<<s<<endl;
//mt19937  ring(chrono: stready_clock::now().time_since_epoch().count)


void sg() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vi first, euler, height, segtree;
vector<bool> visited;


void build (int node, int s, int e);

void dfs(vii  adj, int node, int h = 0) {

	visited[node] = true;
	height[node] = h;
	first[node] = euler.size();
	euler.pb(node);

	for (auto t : adj[node]) {

		if (!visited[t]) {
			dfs(adj, t, h + 1);
			euler.pb(node);
		}
	}

}
void LCA(vii adj , int root = 1) {



	int n = adj.size();
	first.resize(n + 1);
	height.resize(n + 1);
	//euler.resize(n * 2 + 1);
	visited.assign(n, false);
	visited[0] = true;
	dfs(adj, root);

	// c("height")
	// for (int i = 0; i < height.size(); i++) {
	// 	degd(height[i]);
	// }
	// cout << endl;
	// c("first")
	// for (int i = 0; i < first.size(); i++) {
	// 	degd(first[i]);
	// }
	// cout << endl;

	// c("euler")
	// for (int i = 0; i < euler.size(); i++) {
	// 	degd(euler[i]);
	// }
	// cout << endl;
	// c("visited")
	// for (int i = 0; i < visited.size(); i++) {
	// 	degd(visited[i]);
	// }
	// cout << endl;

	int m = euler.size();
	segtree.resize(m * 4);

	build(1, 0, m - 1);
}


void build(int node, int s, int e) {

	if (s == e) {
		segtree[node] = euler[s];
		return;
	}

	int m = (s + e) >> 1;

	build(node << 1, s, m);
	build(node << 1 | 1, m + 1, e);
	int l = segtree[node << 1];
	int r = segtree[node << 1 | 1];

	segtree[node] = (height[l] < height[r]) ? l : r;
	return ;
}

int query(int node, int s, int e, int l, int r) {

	if (e < l || r < s) return -1;

	if (l <= s and e <= r) {
		return segtree[node];

	}
	int m = (s + e) >> 1;
	int left = query(node << 1, s, m, l, r);
	int right = query(node << 1 | 1, m + 1, e, l, r);

	if (left == -1) return right;
	if (right == -1) return left;

	return (height[left] < height[right] ? left : right);
}

int lcaNum(int u, int v) {

	int l = first[u];
	int r = first[v];

	if (l > r) swap(l, r);

	return query(1, 0, euler.size() - 1, l, r);
}


int32_t main() {

	sg();
	int i = 1;

	w(x) {
		cout << "Case " << i << ":" << endl;
		int n, m, k; cin >> n;
		vii adj(n + 1, vi(n));
		for (int i = 1; i <= n; i++) {

			cin >> m;
			vi t;

			if (m == 0) continue;
			while (m--) {
				cin >> k;
				t.pb(k);
			}
			adj[i] = t;
		}

		LCA(adj, 1);




		int q, l, r; cin >> q;

		while (q--) {
			cin >> l >> r;
			cout << lcaNum(l, r) << endl;

		}
		i++;
	}
	return 0;
}
