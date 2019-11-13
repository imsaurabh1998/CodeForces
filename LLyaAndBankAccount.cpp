//
// Created by Saurabh on 11/13/2019.
//


#include<iostream>

using namespace std;


int main() {

	string s;
	cin >> s;

	if (s[0] == '-') {

		if (s.length() == 3 && s[s.length() - 1] == '0') {
			cout << "0" << endl;
			return 0;
		}
		else {
			if (s[s.length() - 1] == '0') {
				s[s.length() - 2] = '0';

			}
			else if(s[s.length()-1]-'0'<s[s.length()-2]-'0') {
				s[s.length() - 2] = s[s.length() - 1];
			}
			s = s.substr(0, s.length() - 1);
		}
	}
	else {
		cout << s << endl;
		return 0;
	}


	cout << s << endl;
}

