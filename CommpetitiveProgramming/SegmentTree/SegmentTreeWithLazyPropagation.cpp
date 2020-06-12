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



void SegmentTreeLazyUpdateRangeQuery(int *tree, int s, int e, int l, int r, int index, int inc) {


	//if lazy array have value on that perticular index
	if (lazy[index] != 0) {
		//cout << "lazy" << endl;
		tree[index] += lazy[index];
		if (s != e) {
			lazy[2 * index] += inc;
			lazy[2 * index + 1] += inc;
		}

		lazy[index] = 0;
	}
	//if there is no overlap of range
	if (r < s || e < l) return ;

	//if range is completly overlap
	if (s >= l && e <= r) {

		//cout << s << " " << e << endl;
		tree[index] += inc;
		if (s != e) {

			lazy[2 * index] += inc;
			lazy[2 * index + 1] += inc;
		}
		return;
	}

	// if (l >= s and e <= r) {
	// 	return tree[index];
	// }

	int mid = (s + e) / 2;

	//cout << "left " << s << " " << mid << endl;
	SegmentTreeLazyUpdateRangeQuery(tree, s, mid, l, r, 2 * index, inc);
	//cout << "right " << mid + 1 << " " << e << endl;
	SegmentTreeLazyUpdateRangeQuery(tree, mid + 1, e, l, r, 2 * index + 1, inc);

	tree[index] = min(tree[2 * index], tree[2 * index + 1]);

}

int SegmentTreeLazyQuery(int *tree, int s, int e, int l, int r, int index) {


	//if lazy array have value on that perticular index
	if (lazy[index] != 0) {
		//cout << "lazy" << endl;
		tree[index] += lazy[index];
		if (s != e) {
			lazy[2 * index] += lazy[index];
			lazy[2 * index + 1] += lazy[index];
		}

		lazy[index] = 0;
	}
	//if there is no overlap of range
	if (r < s || e < l) return INT_MAX;

	//if range is completly overlap
	if (l >= s and e <= r) return tree[index];

	// if (l >= s and e <= r) {
	// 	return tree[index];
	// }

	int mid = (s + e) / 2;

	//cout << "left " << s << " " << mid << endl;
	int left = SegmentTreeLazyQuery(tree, s, mid, l, r, 2 * index);
	//cout << "right " << mid + 1 << " " << e << endl;
	int right = SegmentTreeLazyQuery(tree, mid + 1, e, l, r, 2 * index + 1);

	return min(tree[2 * index], tree[2 * index + 1]);

}

int SegmentTreeLazySum(int *tree, int s, int e, int l, int r, int index) {

	//if lazy array have value on that perticular index
	// if (lazy[index] != 0) {
	// 	//cout << "lazy" << endl;
	// 	tree[index] += lazy[index];
	// 	if (s != e) {
	// 		lazy[2 * index] += lazy[index];
	// 		lazy[2 * index + 1] += lazy[index];
	// 	}

	// 	lazy[index] = 0;
	// }

	if (l >= s and e <= r) {

		tree[index] += (r - l + 1) * lazy[index];
		return tree[index];
	}
	// if (s == e) {
	// 	tree[index] += (r - l + 1) * lazy[index];
	// 	return tree[index];
	// }
	if (r < s || e < l) return 0;

	int mid = (s + e) / 2;
	int leftSum = SegmentTreeLazySum(tree, s, mid, l, r, 2 * index);
	int rightSum = SegmentTreeLazySum(tree, mid + 1, e, l, r, 2 * index + 1);

	return (leftSum + rightSum );
}

int32_t main() {

	sg();
	int a[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(a) / sizeof(int);

	int *tree = new int[4 * size + 1];

	segmentTreeBuild(a, 1, tree, 0, size - 1);
	//segmentTreeUpdateIndex(tree, 0, size - 1, 3, 10, 1);

	SegmentTreeLazyUpdateRangeQuery(tree, 0, size - 1, 3, 5, 1, 10) ;
	SegmentTreeLazyUpdateRangeQuery(tree, 0, size - 1, 0, 2, 1, 20) ;


	cout << SegmentTreeLazyQuery(tree, 0, size - 1, 3, 5, 1) << endl;

	cout << "Lazy Sum: " << SegmentTreeLazySum(tree, 0, size - 1, 0, 1, 1) << endl;

	for (int i = 1; i < 14; i++) {
		cout << tree[i] << " ";
	}
	return 0;
}
