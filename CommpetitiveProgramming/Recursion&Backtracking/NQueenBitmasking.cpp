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
int DONE;


void printQueen(char a[][100]) {

	int n = sizeof a / sizeof a[0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;

	}
	cout << endl;
}

void queen(char a[][100], int rowMask, int ld, int rd, int i) {

	if (DONE == rowMask) {
		printQueen(a);
		return;
	}

	int safe = DONE & (~(rowMask | ld | rd));

	while (safe) {

		int P = safe & (-safe);
		safe -= P;
		int index = log2(P) + 1;
		a[i][index] = 'Q';
		queen(a, rowMask | P, (ld | P) << 1, (rd | P) >> 1, i + 1);
		a[i][index] = '_';
	}
	return;
}

int32_t main() {

	sg();

	int n; cin >> n;
	DONE = (1 << n) - 1;
	char a[100][100];
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			a[i][j] = '_';
		}
	}
	queen(a, 0, 0, 0, 0);

	return 0;
}
