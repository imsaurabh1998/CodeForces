//
// Created by SAURABH on 20-01-2020.
//

#include<bits/stdc++.h>

using namespace std;


vector<string> compareFriends(vector<string> frndsList) {

    set<string> mainList;
    vector<string> rList;
    for(string v : frndsList){

        string t="";
        vector<string> tList;
        for(int i=0;i<v.length();i++){

            if(v[i]==','){
                tList.push_back(t);
                t="";
            }else
                t+=v[i];
        }
        tList.push_back(t);
        t="";
        sort(tList.begin(),tList.end());
        t+=tList[0];
        t+=",";
        t+=tList[1];

        mainList.insert(t);
    }
    for(string a : mainList) rList.push_back(a);

    return rList;





}
int main(){

        int n;
        cin>>n;

        vector<string> list;
        while(n-->0){
            string a;
            cin>>a;
            list.push_back(a);
        }

        compareFriends(list);
}

