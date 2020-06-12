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
int lazy[1000] = {0};

void buildTree(int *arr, int *tree, int s, int e, int index) {

	if (s == e) {
		tree[index] = arr[s];
		return;
	}

	int mid = (s + e) / 2;

	buildTree(arr, tree, s, mid, 2 * index);
	buildTree(arr, tree, mid + 1, e, 2 * index + 1);

	tree[index] = tree[2 * index] + tree[2 * index + 1];
	return;
}
//update the range of tree
void LazyRangeUpdate(int * tree, int s, int e, int l, int r, int idx, int inc) {

	// if lazy array have perticular index or not
	if (lazy[idx] != 0) {

		tree[idx] += lazy[idx];

		if (s != e) {

			lazy[2 * idx] += inc;
			lazy[2 * idx + 1] += inc;
		}

		lazy[idx] = 0;
	}

	//if given range is not overlap

	if (e < l || r < s) return ;

	// if given range is completly overlap
	if (l <= s and e <= r) {
		tree[idx] += inc;

		if (s != e) {
			lazy[2 * idx] += inc;
			lazy[2 * idx + 1] += inc;
		}
		lazy[idx] = 0;
		return;
	}

	int mid = (s + e) / 2;

	LazyRangeUpdate(tree, s, mid, l, r, 2 * idx, inc);
	LazyRangeUpdate(tree, mid + 1, e, l, r, 2 * idx + 1, inc);

	tree[idx] = tree[2 * idx] + tree[2 * idx + 1];

	return;

}

int LazyRangeSum(int *tree, int s, int e, int l, int r, int idx) {

//if perticular range completly overlap
	if (s >= l and e <= r) {
		tree[idx] += (e - s + 1) * lazy[idx];
		return tree[idx];
	}

//if range not lies in range
	if (r < s || e < l) return 0;

	int mid = (s + e) / 2;
	int leftSum = LazyRangeSum(tree, s, mid, l, r, 2 * idx);
	int rightSum = LazyRangeSum(tree, mid + 1, e, l, r, 2 * idx + 1);

	return leftSum + rightSum;

}



int32_t main() {

	sg();

	int a[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(a) / sizeof(int);

	int tSize = 4 * n + 1;
	int *tree = new int[tSize];

	buildTree(a, tree, 0, n - 1, 1);
	LazyRangeUpdate(tree, 0, n - 1, 3, 5, 1, 10);
	// for (int i = 1; i < 14; i++) {
	// 	cout << tree[i] << " ";
	// }
	// cout << endl;

	cout << LazyRangeSum(tree, 0, n - 1, 0, 4, 1) << endl;
	return 0;
}
