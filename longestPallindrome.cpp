//
// Created by SAURABH on 02-02-2020.
//

#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

static  map<string, int> ma;
string str[200];

bool selfRev(string s) {

    string  rev = s;
    reverse(rev.begin(), rev.end());

    if ( s == rev) {

        return true;
    }
    return false;

}
bool checkRev(string s) {

    string t = s;
    reverse(t.begin(), t.end());
    bool a = selfRev(s);
    if (a && (ma[s] > 1) ) {

            ma[s]--;
            ma[s]--;
            return true;


    }
    else if (ma.find(t) != ma.end()) {
        ma[s]--;
        ma[t]--;
        return true;
    }

    return true;
}



int main() {

    int n,m;

    cin >> n>>m;

    vector<string> Mlist;
    vector<int> lit(n);
    string finalString="";

    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        str[i] = s;
        ma[s]++;
    }

    string maxSelf="";
    for (int i = 0; i < n; i++) {

        bool a, b;
        if (ma[str[i]] > 0) {
            a = checkRev(str[i]);
            b = selfRev(str[i]);
            if (b) ma[str[i]]--;


            if (a && !b) {
                Mlist.push_back(str[i]);
            }
            if (b) {
                if (str[i].length() > maxSelf.length()) maxSelf = str[i];
            }

        }
    }

    for (int i = 0; i < Mlist.size(); i++) {
        finalString += Mlist[i];
    }
    if (maxSelf.length() > 1) finalString += maxSelf;

    for (int i = Mlist.size() - 1; i >= 0; --i) {
        string x = Mlist[i];
        reverse(x.begin(), x.end());
        finalString += x;

    }

    cout << finalString.length() << endl;
    cout << finalString << endl;




}
