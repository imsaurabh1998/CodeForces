//
// Created by SAURABH on 15-03-2020.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){

        int n;
        cin >> n;

        set<int> s;

        while(n--)
        {
            int temp;
            cin >> temp;
            s.insert(temp);
        }

        cout << s.size() << endl;
    }
}