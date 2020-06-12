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

int nQueenCount = 0;
bool safePlace(int m[][100], int i, int j, int n) {


	for (int x = i; x >= 0; --x) {

		if (m[x][j] == 1) return false;
	}

	int x, y;
	x = i; y = j;

	while (x >= 0 && y >= 0) {

		if (m[x][y] == 1) return false;

		--x;
		--y;
	}

	x = i; y = j;

	while (x >= 0 && y < n) {

		if (m[x][y] == 1) return false;

		x--;
		y++;
	}

	return true;

}



bool nQueen(int m[][100], int i, int n) {

//Base Case
	if (i == n) {

		//We have to print the queens


		// for (int i = 0; i < n; i++) {
		// 	for (int j = 0; j < n; j++) {
		// 		cout << m[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }

		nQueenCount++;

		//cout << endl;

		return false;
	}

	for (int k = 0; k < n; k++) {

		if (safePlace(m, i, k, n)) {

			m[i][k] = 1;

			bool nextPlace = nQueen(m, i + 1, n);
			if (nextPlace) {
				return true;
			}
			m[i][k] = 0;
		}
	}

	return false;

}

int32_t main() {

	sg();

	int mat[100][100] = {0};
	int n; cin >> n;

	nQueen(mat, 0, n);
	cout << nQueenCount << endl;

	return 0;
}
