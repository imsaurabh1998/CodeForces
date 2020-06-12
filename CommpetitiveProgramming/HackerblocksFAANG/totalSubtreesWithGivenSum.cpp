
//Question Statement
// We are given a binary tree having N+1 nodes N, edges and an integer X. The task is to find
// the count of the count of the total number of subtree having total node's data sum equal
// to a value X.

// Note: Tree can build using level order traversal, using the iteration over the given
// string.
// Tree is complete Binary Tree.

// Input Format
// First line of input contains the number of test cases T. for each T, there will be only
// a single line of input in the form of string representing the tree.

// Constraints
// 1<=N<=10^3
// 1<=T<=100
// -10^3<=Node value<=10^3

// OutputFormat
// Print the count the number of subtrees with given sum.


// Sample Input
// 1
// 1 2 3
// 5

// Sample OutputFormat
// 0


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
char a[1000];
vi V;

class node {

public:
	int data;
	node* left, *right;

	node(int v) {

		data = v;
		left = right = NULL;
	}
};

void  stringToInt() {

	char *ans = strtok(a, " ");
	while (ans != NULL) {
		V.pb(stoi(ans));
		ans = strtok(NULL, " ");
	}
}

node* CreateTree() {

	int i = 0;
	int val = V[i++];
	queue<node*> q;

	node* root = new node(val);
	q.push(root);

	while (!q.empty() && i < V.size()) {

		node* temp = q.front();
		q.pop();

		val = V[i];
		if (val != -1 && i < V.size()) {

			temp->left = new node(val);
			q.push(temp->left);
			i++;
		}

		val = V[i];
		if (val != -1 && i < V.size()) {

			temp->right = new node(val);
			q.push(temp->right);
			i++;
		}
	}

	return root;

}

int sum(node* root, int x) {

	if (root == NULL) return 0;

	if (root->data == x) return x;

	int left = sum(root->left, x);
	int right = sum(root->right, x);

	return root->data + left + right;
}
int solve(node* root, int x) {

	if (root == NULL) return 0;

	int ans = 0;

	if (sum(root, x) == x) {
		ans = 1;
	}

	int left = solve(root->left, x);
	int right = solve(root->right, x);

	return ans + left + right;

}


int32_t main() {

	sg();
	w(x) {
		cin.ignore();
		cin.getline(a, 1000);
		stringToInt();
		node * root = CreateTree();
		int x; cin >> x;

		cout << solve(root, x) << endl;
	}
	return 0;
}
