//
// Created by SAURABH on 26-01-2020.
//
#include<bits/stdc++.h>

using namespace std;

void twoSum( vector<int> & A, int B) {

    map<int, int> m;

    vector<int> list;


    for (int i = 0; i < A.size(); i++) {

        if (m.find(A[i]) == m.end()) {
            m[A[i]] = i + 1;
        }
    }



    for (int i = 0; i < A.size(); i++) {

        int rem = B - A[i];


        if (m.find(rem) != m.end()) {

            list.push_back((i + 1));
            list.push_back(m[rem]);



        }

    }

    for(int  a: list) cout<<a<<" ";



}

int main(){

    vector<int> list;

    list.push_back(2);
    list.push_back(7);
    list.push_back(8);
    list.push_back(11);
    list.push_back(15);

    twoSum(list,9);


}


