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

int segmentTreeQuery(int* tree, int s, int e, int qs, int qe, int index) {

	//if there is complete range of query
	if (qs >= s and e <= qe) {
		return tree[index];
	}
	//if there is no overlapping subproblems
	if (qs > e || qe < s) {
		return INT_MAX;
	}


	//for partial overlap of query range
	int mid = (s + e) / 2;

	int left = segmentTreeQuery(tree, s, mid, qs, qe, 2 * index);
	int right = segmentTreeQuery(tree, mid + 1, e, qs, qe, 2 * index + 1);

	return min(left, right);
}

void segmentTreeUpdateIndex(int* tree, int s, int e, int idx, int val, int index) {

	if (s == e) {
		tree[index] += val;
		return;
	}

	int mid = (s + e) / 2;
	if (idx <= mid)
		segmentTreeUpdateIndex(tree, s, mid, idx, val, 2 * index);
	else
		segmentTreeUpdateIndex(tree, mid + 1, e, idx, val, 2 * index + 1);

	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
	return;
}

void segmentTreeUpdateRange(int* tree, int s, int e, int l, int r, int val, int index) {

	if (s == e && s >= l && e <= r) {
		tree[index] += val;
		return;
	}
	if (s == e) return;

	int mid = (s + e) / 2;

	segmentTreeUpdateRange(tree, s, mid, l, r, val, 2 * index);

	segmentTreeUpdateRange(tree, mid + 1, e, l, r, val, 2 * index + 1);

	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
	return;

}
void segmentTreeBuild(int *arr, int index, int *tree, int s, int e) {

	if (s == e ) {
		tree[index] = arr[s];
		return;
	}
	int mid = (s + e) / 2;
	segmentTreeBuild(arr, 2 * index, tree, s, mid);
	segmentTreeBuild(arr, 2 * index  + 1, tree, mid + 1, e);

	tree[index] = min(tree[index * 2], tree[2 * index  + 1]);

	return;
}

int32_t main() {

	sg();

	int a[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(a) / sizeof(int);

	int *tree = new int[4 * size + 1];

	segmentTreeBuild(a, 1, tree, 0, size - 1);
	//segmentTreeUpdateIndex(tree, 0, size - 1, 3, 10, 1);
	segmentTreeUpdateRange(tree, 0, size - 1, 3, 5, 10, 1);
	cout << segmentTreeQuery(tree, 1, size - 1 , 5, 6, 1) << endl;

	for (int i = 1; i < 14; i++) {
		cout << tree[i] << " ";
	}


	return 0;
}
