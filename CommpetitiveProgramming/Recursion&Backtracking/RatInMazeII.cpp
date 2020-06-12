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

bool Rat(char a[1002][1002] , int i, int j, int N, int M) {

	if (i == ( N - 1) && j == (M - 1) && a[i][j] != 'X') {
		//cout << "Output Print" << endl;
		a[i][j] = '1';
		for (int l = 0; l < N; l++) {
			for (int k = 0; k < M; k++) {

				if (a[l][k] == 'X')cout << "0";
				else cout << a[l][k];
			}
			cout << endl;
		}

		exit(0);
		a[i][j] = '0';

		return true;
	}

	if (i == N || j == M) return false;

	if (a[i][j] != 'X') {

		a[i][j] = '1';

		bool right = Rat(a, i, j + 1, N, M);
		if (right) return true;

		bool left = Rat(a, i + 1, j, N, M);
		if (left) return true;
		a[i][j] = '0';
	}

	return false;
}
int32_t main() {

	sg();

	int n, m; cin >> n >> m;

	char a[1002][1002];



	for (int i = 0; i < n; i++) {

		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			a[i][j] = s[j];
		}


	}



	if (!(Rat(a, 0, 0, n, m))) {
		cout << "-1" << endl;
	}


	return 0;
}
