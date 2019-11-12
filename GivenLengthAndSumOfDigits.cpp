//
// Created by Saurabh on 11/12/2019.
//

#include<iostream>
#include <vector>

using namespace std;

int main(){

    int m,s;
    cin>>m>>s;


    if (s == 0)
    {
        cout << (m == 1 ? "0 0" : "-1 -1") << endl;
        return 0;
    }
    string a="",min("");
    int t;
    int sam=s;
    int i=0;
    while(i++<m){
        if(s>=9){
            a+="9";
            s-=9;

        }else if(s<9){
            a+=s+'0';
            s=0;

        }else{
            a+="0";
        }

    }
    if (s > 0)
    {
        cout << "-1 -1" << endl;
        return 0;
    }

    for(int i=a.length()-1;i>=0;i--)
        min+=a[i];

    int k=0;

    for(;min[k]=='0';k++);

    min[0]++;
min[k]--;
    cout<<min<<" "<<a<<endl;


}

