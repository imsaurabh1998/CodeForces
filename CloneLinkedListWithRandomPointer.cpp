//
// Created by Saurabh on 2/3/2020.
//


#include<bits/stdc++.h>
using namespace std;

class node{

public:
    int data;
    node *nex;
    node *random;

    node(int val){
        data=val;
        nex=NULL;
        random=NULL;
    }
};