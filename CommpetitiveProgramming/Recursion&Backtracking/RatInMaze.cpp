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



bool ratMaze(char rat[][100], int i, int k, int n) {

//Base Case
	if (i == n  && k == n) {

		//We have to print the queens
		rat[i][k] = 'R';
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				cout << rat[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;

		return true;
	}


//recusive call for rat in maze

	if (i > n  || k > n) return false;

	if (rat[i][k] == '*') return false;


	rat[i][k] = 'R';



	bool right = ratMaze(rat, i, k + 1, n);
	bool down = ratMaze(rat, i + 1, k, n);

	rat[i][k] = '.';
	if (right || down) return true;


	return false;

}

int32_t main() {

	sg();
	char rat[][100] = {"....", "..*.", ".*..", "....",};
	ratMaze(rat, 0, 0, 3);
	// w(x) {
	// 	int mat[100][100];
	// 	int n; cin >> n;

	// 	nQueen(mat, 0, n);
	// }
	return 0;
}
