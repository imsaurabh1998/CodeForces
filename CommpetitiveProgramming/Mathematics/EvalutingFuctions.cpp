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
#define vii vector<vector<int>>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi,greater<int>>
#define setbits(x) __buitin_popcountll(x)
#define zrobits(x) __buitln_ctzll(x)
#define mod 1000000009 //1e9+7
#define inf 1e18
#define ps(x,y) fixed<<setpresicion(y)<<x
#define mk(arr,n,type) type *arr=new type[n]
#define w(x) int x;cin>>x; while(x--)
//mt19937  ring(chrono: stready_clock::now().time_since_epoch().count)


void sg() {

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

string Mutli(string A, string B) {

	int n1 = A.length();
	int n2 = B.length();
	vi vec(n1 + n2, 0);

	int p = -1, pp = -1;
	for (int i = n1 - 1; i >= 0; --i) {
		p++; pp = -1;
		int carry = 0;
		for (int j = n2 - 1; j >= 0; --j) {
			pp++;
			vec[p + pp] += ((A[i] - '0') * (B[j] - '0') ) + carry;
			carry = vec[p + pp] / 10;
			vec[p + pp] %= 10;
		}
		vec[p + pp + 1] += carry;
	}

	int z = n1 + n2 - 1;
	while (vec[z] == 0) z--;

	string answer;
	while (z >= 0)
		answer += to_string(vec[z--]);


	return answer;
}
string Adding(string A, string B) {

	if (A.length() < B.length()) swap(A, B);
	string c;

	int carry = 0, rem = 0;
	int temp = 0;

	int n = B.length();
	int i = A.size() - 1;
	int j = B.size() - 1;
	for (; j >= 0; --i, j--) {

		temp = (A[i] - '0') + (B[j] - '0') + carry;

		carry = temp / 10;
		rem = temp % 10;
		c += to_string(rem);
	}
	for (; i >= 0; --i) {
		temp = (A[i] - '0') + carry;
		carry = temp / 10;
		rem = temp % 10;
		c += to_string(rem);
	}
	if (carry != 0) c += to_string(carry);

	reverse(c.begin(), c.end());

	//cout << "Adding value : " << c << endl;
	return c;
}

string subtract(string A, string B) {


	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());
	string c;

	int carry = 0, sub = 0;

	for (int i = 0; i < B.length(); i++) {

		int t = (A[i] - '0') - (B[i] - '0') - carry;

		if (t < 0) {
			t += 10;
			carry = 1;
		} else  carry = 0;

		c += t + '0';
	}

	for (int i = B.length(); i < A.length(); i++) {

		int t = (A[i] - '0') - carry;

		if (t < 0) {
			t += 10;
			carry = 1;
		} else  carry = 0;

		c += t + '0';
	}

	reverse(c.begin(), c.end());
	//cout << "subtract val: " << c << endl;
	return c;
}


//f(x)=3x^2-x+10;
//g(x)=4x^3+3x^2-5x+4;
int32_t main() {

	sg();


	//cout << squareOfString(x, stoi (x)) << endl;
	//cout << Adding("2", "10");

	string x; cin >> x;

	string one = Mutli("3", Mutli(x, x));//3x^2
	//cout << "3x^2 : " << one << endl;
	string two = Mutli("4", Mutli(Mutli(x, x), x));//4X^3
	//cout << "4x^3 " << two << endl;
	string three = Mutli("2", Mutli(x, x));

	string fx = Adding(subtract(one, x), "10");
	//cout << "value of fx : " << fx << endl;
	string gx = subtract(Adding(Adding(two, three), "4"), Mutli("5", x));
	//cout << "value of gx :" << gx << endl;

	string result = Adding(fx, gx);
	cout << result;


	return 0;
}
