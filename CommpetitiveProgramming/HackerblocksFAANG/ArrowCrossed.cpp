
//Statement:->

// The fierce battle of Lord sri ram and ravan is going on. They both are constantly
// shooting arrows towards each other not necessarily turn by turn. it means that They
// can shoot multiple arrows at a time.
// You are given an array of intergers. Here the sign of the integers represents the
// direction of the arrow, '+' :right and '-': left.The absoulte value represents the
// size of the arrow. A collisions will take place if an arrow is moving towards right
// and the next arrow moves in the left direction. At each colliosions the arrow with
// larger size destroys the smaller sized arrow and continues the path. if both the arrow
// have size then they both are destroyed.

// Note: Arrows moving in the same direction(-,-,+,+) never collide and neither moving
// away from each other (-,+) collide. The only arrow that collide are the arrows that
// move towards each other (+,-).

// Your task is to help Lord Ram decode the final state of the arrows. So that he can know
// how many more arrows he needs to shoot.

// Sample Input-> 1 -1 2 -5 7 -6 -5 3 -5 10
// Sample Output-> -5 7 10

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
void solve(vi a, int n) {


	stack<int> s;
	bool flag = true;
	for (int i = 0; i < n; i++) {
		int x = a[i];
		flag = true;
		while (!s.empty() && s.top() > 0 && x < 0) {

			if (s.top() == abs(x)) {
				s.pop();
				flag = false;
				break;
			}
			else if (s.top() < abs(x)) {
				s.pop();

			} else {
				flag = false;
				break;
			}
		}

		if (flag)
			s.push(x);
	}
	int size = s.size();
	int *arr = new int[size];
	int t = size;

	while (!s.empty()) {

		arr[--t] = s.top();
		s.pop();
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
int32_t main() {

	sg();

	int n; cin >> n;
	vi a(n);

	for (auto &i : a)cin >> i;
	solve(a, n);
	return 0;
}
