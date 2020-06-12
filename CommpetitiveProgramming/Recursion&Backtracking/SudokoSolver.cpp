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

bool canPlace(int m[][9], int num, int i, int j, int n) {

	for (int x = 0; x < n; x++) {

		if (m[i][x] == num || m[x][j] == num) return false;

	}

	int rn = sqrt(n);

	int row = (i / rn) * rn;
	int col = (j / rn) * rn;

	for (int a = row; a < row + rn; a++) {
		for (int b = col; b < col + rn; b++) {
			if (m[a][b] == num) return false;
		}
	}


	return true;
}

bool sudokoSolve(int m[][9], int i, int j , int n) {

	//base case of sudoko Solver
	if (i == n) {

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << m[i][j] << " ";
			}
			cout << endl;
		}

		return true;
	}

	//last case row

	if (j == n) return sudokoSolve(m, i + 1, 0, n);

	//if matrix has predefined value

	if (m[i][j] != 0) return sudokoSolve(m, i, j + 1, n);

	for (int number = 1; number <= n; number++) {

		if (canPlace(m, number, i, j, n)) {

			m[i][j] = number;
			bool nextPlace = sudokoSolve(m, i, j + 1, n);

			if (nextPlace) return true;
		}
	}

	m[i][j] = 0;
	return false;
}

int32_t main() {

	sg();

	int mat[9][9] = {
		{0, 3, 0, 0, 6, 0, 5, 0, 4},
		{8, 0, 0, 0, 4, 0, 0, 9, 0},
		{5, 4, 0, 9, 0, 2, 7, 0, 3},
		{2, 0, 0, 6, 0, 0, 4, 0, 9},
		{0, 5, 1, 0, 0, 4, 0, 3, 0},
		{6, 0, 4, 0, 7, 0, 0, 5, 0},
		{3, 0, 0, 4, 0, 9, 2, 0, 5},
		{0, 0, 8, 0, 3, 0, 9, 0, 7},
		{9, 1, 0, 7, 0, 6, 0, 4, 0}
	};
	sudokoSolve(mat, 0, 0, 9);
	// w(x) {
	// 	int n; cin >> n;
	// 	cout << n << endl;
	// }
	return 0;
}
