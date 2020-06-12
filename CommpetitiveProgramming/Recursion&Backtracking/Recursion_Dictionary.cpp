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
set<string> allString;

// bool checkLexographic(string a) {

// 	bool asec = true, desc = true;
// 	for (int i = 0, j = a.length() - 1; i < a.length() - 1, j > 0; --j, i++) {
// 		if (a[i] > a[i + 1]) asec = false;
// 		if (a[j - 1] < a[j]) desc = false;
// 	}

// 	if (asec || desc) return true;
// 	return false;
// }
void RecursionDictionary(string org, string s, int i, int n) {

	if (i == n) {
		//cout << s << " ";
		//if (checkLexographic(s)) {
		//cout << s << endl;
		if (s > org) {
			allString.insert(s);
		}
		//}
		return ;
	}

	for (int x = i; x < n; x++) {
		swap(s[x], s[i]);
		RecursionDictionary(org, s, i + 1, n);
		swap(s[x], s[i]);
	}
	return;

}
int32_t main() {

	sg();
	string s; cin >> s;
	RecursionDictionary(s, s, 0, s.length());
	for (string a : allString)
		cout << a << endl;
	return 0;
}
