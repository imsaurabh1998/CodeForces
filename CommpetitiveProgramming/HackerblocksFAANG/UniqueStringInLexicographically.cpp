// Sheldon Cooper has a string which consist only of lowercase letters. But,the problem
// is that he don't like duplicate characters, so he want to remove duplicate letters
// so that every letter appears once.Since he is busy with some work at University
// he needs your help So, you have to print the lexicographically minimum possible string
// all unique characters.

//sample Input  bbbacdbbb
//sample Output acdb

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


void solve(string a) {

	stack<char> s;
	int lastIndex[26] = {0};
	bool occurnceStack[26] = {0};

	for (int i = 0; i < a.length(); i++) {
		lastIndex[a[i] - 'a'] = i;
	}

	for (int i = 0; i < a.length(); i++) {

		char ch = a[i];

		while (!s.empty() && s.top() > ch && lastIndex[s.top() - 'a'] > i) {

			occurnceStack[s.top() - 'a'] = false;
			s.pop();

		}

		if (!occurnceStack[ch - 'a']) {
			s.push(ch);
			occurnceStack[ch - 'a'] = true;
		}
	}
	int k = s.size();
	char *ans = new char[k + 1];

	ans[k--] = '\0';

	while (!s.empty()) {

		ans[k--] = s.top();
		s.pop();
	}

	cout << ans << endl;

}

int32_t main() {

	sg();
	string s; cin >> s;

	solve(s);
	return 0;
}