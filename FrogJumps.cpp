//
// Created by SAURABH on 12-03-2020.
//
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){

        string s;
        cin >> s;

        int count = 1;
        int maxNeed = INT_MIN;

        for (char a : s)
        {
            if (a == 'L') count++;
            else
            {
                maxNeed = max(maxNeed, count);
                count = 1;
            }
        }
        maxNeed = max(maxNeed, count);
        if (maxNeed < 0) cout << count << endl;
        else
            cout << maxNeed << endl;
    }
}



