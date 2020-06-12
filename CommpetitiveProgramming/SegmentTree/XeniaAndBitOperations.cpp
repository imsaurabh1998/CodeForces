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
int segment[1000005];
int a[1000005];


void build(int node, int l, int r) {

	if (l == r) {
		segment[node] = a[l];
		return;
	}

	int m = (l + r) >> 1;

	build(node * 2, l, m);
	build(2 * node + 1, m + 1, r);

	int time = log2(r - l + 1);
	//deg(time);

	if (time & 1) {
		segment[node] = (segment[2 * node] | segment[2 * node + 1]);

	}
	else segment[node] = (segment[2 * node] ^ segment[2 * node + 1]);

	return;
}

void update(int node, int l, int r, int index, int updateVal) {

	//if (r < index || l < index) return ;
	if ( l == r && l == index) {
		segment[node] = updateVal;
		return;
	}

	int m = (l + r) >> 1;

	if (index <= m)
		update(2 * node, l, m, index, updateVal);
	else
		update(2 * node + 1, m + 1, r, index, updateVal);

	int times = log2(r - l + 1);
	if (times & 1) {
		segment[node] = segment[2 * node] | segment[2 * node + 1];
	}
	else {
		segment[node] = segment[2 * node] ^ segment[2 * node + 1];
	}

	return;
}


int32_t main() {

	sg();
	int n, m; cin >> n >> m;

	for (int i = 1; i <= (1 << n); i++)cin >> a[i];



	build(1, 1, (1 << n));

	//cout << segment[1];

	for (int i = 0; i < m; i++) {

		int p, b;
		cin >> p >> b;

		update(1, 1, ( 1 << n), p, b);
		cout << segment[1] << endl;
	}
	return 0;
}
