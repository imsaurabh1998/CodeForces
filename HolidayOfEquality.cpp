//
// Created by Saurabh on 11/13/2019.
//


#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;


int main() {

	int n;

	cin >> n;

	int mx = INT16_MIN;

	vector<int> list;

	while (n-- > 0) {
		int temp;
		cin >> temp;

		list.push_back(temp);
		mx = max(mx, temp);
	}

	int count = 0;

	for (int a : list) {

		count += mx - a;
	}

	cout << count << endl;
}

