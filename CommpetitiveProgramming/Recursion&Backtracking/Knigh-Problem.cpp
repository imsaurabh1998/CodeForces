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

int row[] = { -2, -1, 1, 2, 2, 1, -1, -2};
int col[] = {1, 2, 2, 1, -1, -2, -2, -1};
bool canPlace(int a[][100], int i , int j, int N) {
	return (i >= 0 && j >= 0 && i < N && j < N && a[i][j] == 0);
}

bool soduko(int a[][100], int i, int j, int move, int N) {

	if (move == ((N * N))) {
		a[i][j] = move;
		for (int i = 0; i < N; i++) {

			for (int j = 0; j < N; j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		return true;
	}

	// for (int i = 0; i < N; i++) {

	// 	for (int j = 0; j < N; j++) {
	// 		cout << a[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	// cout << endl;


	// a[i][j] = move;
	// cout << "i: " << i << " j: " << j << " array Value: " << a[i][j] << endl;
	a[i][j] = move;
	for (int k = 0; k < 8; k++) {
		int NextRow = i + row[k];
		int NextCol = j + col[k];

		if (canPlace(a, NextRow, NextCol, N)) {
			bool next = soduko(a, NextRow, NextCol, move + 1, N);
			if (next) return true;

		}
	}
	a[i][j] = 0;



	return false;
}

int32_t main() {

	sg();

	int n; cin >> n;


	int a[100][100] = {0};
	soduko(a, 0, 0, 1, n);

	return 0;
}
