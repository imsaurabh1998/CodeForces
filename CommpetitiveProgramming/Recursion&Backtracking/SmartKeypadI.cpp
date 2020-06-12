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
string table[] = { " ", ".+@$", "abc", "def", "ghi",
                   "jkl" , "mno", "pqrs" , "tuv", "wxyz"
                 };



void keypad(string s, char out[], int i, int j, int n) {

	if (i == n) {
		out[j] = '\0';
		cout << out << endl;

		return;
	}

	int v = s[i] - '0';

	for (int x = 0; x < table[v].length(); x++) {

		out[j] = table[v][x];
		//cout << out[j] << endl;
		keypad(s, out, i + 1, j + 1, n);
		//out[j] = '\0';
	}

}
int32_t main() {

	sg();

	char out[12];
	string n; cin >> n;
	keypad(n, out, 0, 0, n.length());

	return 0;
}
