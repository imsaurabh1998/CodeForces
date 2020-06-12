//Question Statement

// A Binary tree is given.There are 2 players Rajesh koothrapalli and howard wolowitz.
// we are given the root of this binary tree, and the number of nodes n in the tree. n
// is odd, and each node has a distinct value from 1 to n.

// Initially, Rajesh(first) colour a value x with 1<=x<=n, and howard colors a value y
// with 1<=y<=n and y!=x. Rajesh colors the node with value x red, and howard colors
// the node with value y blue.

// Then the players take turns starting with Rajesh who is the first player. In each turn
// , that player chooses a node their color(red if player 1, blue if player 2) and color
// and uncolored neightbour of the chosen node (either the left child, right child, or parent
// 	 of the chosen node.)

// if (and only if) a player cannot choose such a node in this way, they must their turn.
// 	if both players pass their turn, the game ends, and the winner is the player that
// 	colored more nodes.

// Howard and Rajesh are best Friends. So, they are playing this game strategically.

// You are howard. if it is possible to choose such a y to ensure you win the game, print 1,
// if it is not possible, print 0.

// Input Format
// First line contains 3 integers (Total Nodes including leaves which are depicted as -1s,
// 	Actual Nodes which are depcited by Natural Numbers 1 to infinity, X is the node
// 	with natural number X which is marked by the first Person) Second line contains T_Nodes
// 	space seprated integers (-1 is a leaf) in preorder fashion for the tree to constructed.

// 	Note: You have to construct the tree from the preorder sequence given.

// 	Constraints: 1<=Actual Nodes <=1000 Total Nodes may vary accordingly.

// 	Output Format: Single digit 0 (LOSE) or 1 (WIN)

// 	SimpleInput->
// 		7 3 1
// 		1 2 -1 -1 3 -1 -1

// 	SimpleOutput->
// 	 false(0)

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

class node {

public:
	int data;
	node *left, *right;

	node(int v) {

		data = v;
		left = right = NULL;
	}
};

node* creatNode() {

	int n; cin >> n;
	if (n == -1) return NULL;
	node* root = new node(n);

	root->left = creatNode();
	root->right = creatNode();

	return root;
}



node * FindNode(node * root, int x) {

	if (root->data == x) return root;

	node* left = FindNode(root->left, x);
	node* right = FindNode(root->right, x);

	return left == NULL ? right : left;
}

int countNode(node* root) {

	if (root == NULL) return 0;

	int left = countNode(root->left);
	int right = countNode(root->right);

	return (1 + left + right);
}

bool solve(node* root, int x, int n) {


	node* t = FindNode(root, x);

	int leftCount = countNode(t->left);
	int rightCount = countNode(t->right);

	int rem = n - (leftCount + rightCount) + 1;

	if (leftCount > rightCount) return true;
	if (rightCount > leftCount) return true;
	if (rem > (leftCount + rightCount)) return true;

	return false;
}


int32_t main() {

	sg();
	int n, c, x; cin >> n >> c >> x;



	node* root = creatNode();

	if (solve(root, x, c)) {
		cout << 1 << endl;
	} else cout << 0 << endl;
	return 0;
}
