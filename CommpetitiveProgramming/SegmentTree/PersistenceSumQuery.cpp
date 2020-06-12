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
#define rg 100005
//mt19937  ring(chrono: stready_clock::now().time_since_epoch().count)


void sg() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

struct node
{
	int val;
	node* left, *right;
	node(int data) {
		val = data;
		left = right = NULL;
	}
};

int a[rg];
node* version[rg];

//build segment tree with maxsum range
void buildTree(node* n, int s, int e) {

	if (s == e) {
		n->val = a[s];
		return;
	}

	n->left = new node(0);
	n->right = new node(0);

	int mid = (s + e) >> 1;
	buildTree(n->left, s, mid);
	buildTree(n->right, mid + 1, e);

	n->val = n->left->val + n->right->val;
	return;
}

// hit the query for perticular range to get what value we have on that range in O(logn)
int query(node *n, int s, int e, int l, int r) {

	if (e < l || r < s) return 0;

	if (l <= s and e <= r) return n->val;

	int mid = (s + e) / 2;

	int left = query(n->left, s, mid, l, r);
	int right = query(n->right, mid + 1, e, l, r);

	return left + right;
}

//to have the changes on that segment tree for their updates
void upgrade(node* prev, node* curr, int s, int e, int idx, int inc) {

	if (s == e) {
		curr->val = prev->val + inc;
		return;
	}

	int mid = (s + e) >> 1;

	if (idx <= mid) {

		curr->right = prev->right;
		curr->left = new node(0);

		upgrade(prev->left, curr->left, s, mid, idx, inc);
	}
	else {
		curr->left = prev->left;
		curr->right = new node(0);
		upgrade(prev->right, curr->right, mid + 1, e, idx, inc);
	}

	curr->val = curr->left->val + curr->right->val;
	return;
}


int32_t main() {

	sg();

	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	node* version0 = new node(0);
	buildTree(version0, 0, n - 1);

	// node * tempVersion = version0;

	// queue<node*> q;
	// q.push(tempVersion);
	// int i = 1;
	// while (!q.empty()) {

	// 	node* val = q.front();
	// 	q.pop();


	// 		cout << i << " : " << val->val << endl;

	// 	i++;

	// 	if (val->left != NULL)q.push(val->left);
	// 	else i++;
	// 	if (val->right != NULL)q.push(val->right);
	// 	else i++;
	// }

	cout << query(version0, 0, n - 1, 3, 5) << endl;

	//hit the update query to check that latest changes and old one's are exist
	version[0] = version0;

	node* version1 = new node(0);
	version[1] = version1;

	upgrade(version[0], version[1], 0, n - 1, 3, 10);

	cout << query(version[1], 0, n - 1, 0, 4) << endl;
	return 0;
}
