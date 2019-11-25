//
// Created by SAURABH on 21-11-2019.
//

#include<iostream>
#include <vector>
#include <algorithm>
#include<map>

using namespace std;



int main() {


	int n, k;
	cin >> n >> k;

	map<string, string> list;
	vector<string> sList;

	while (k-- > 0) {

		string a, b;
		cin >> a >> b;
		list.insert(pair<string, string>(a, b));

	}

	while (n-- > 0) {

		string a;
		cin >> a;
		sList.push_back(a);
	}

	string output;

	for (string val : sList) {

		map<string,string> ::iterator  f= list.find(val);
		//auto s = list.find(val);
		string t1 = f->first;
		string t2 = f->second;
		if (t1.length() > t2.length()) {
			output += t2 + " ";
		}
		else {
			output += t1 + " ";
		}
	}

	cout << output << endl;

}