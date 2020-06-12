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

vis list1;
char chars[] = {'a', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
               };

void allCodes(string s, char out[], int i, int j, int n) {


	//Base Case
	if (i == n) {
		//cout << out << endl;
		list1.pb(out);
		return;
	}

	out[j] = chars[s[i] - '0'];
	allCodes(s, out, i + 1, j + 1, n);

	out[j] = '\0';
	if (i + 1 < n) {
		//cout << "value of i: " << i << endl;
		int val = (s[i] - '0') * 10 + (s[i + 1] - '0');
		if (val < 27) {

			out[j] = chars[val];
			allCodes(s, out, i + 2, j + 1, n);
		}
	}
	//out[j] = '\0';

	return;

}
int32_t main() {

	sg();
	list1.clear();
	char out[100000];

	string s;
	cin >> s;
	allCodes(s, out, 0, 0, s.length());

	string result;
	result += "[";
	for (string a : list1) {
		result += a + ", ";
	}

	result.pop_back();
	result.pop_back();
	result += "]";
	cout << result;
	return 0;
}
