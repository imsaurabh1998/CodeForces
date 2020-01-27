//
// Created by Saurabh on 1/27/2020.
//

#include<bits/stdc++.h>

using namespace std;
#define mod=1e9+7;
string a[10000009];
int substrings(string n) {

    int nLength=n.length();
    int tCount=(nLength*(nLength+1))/2;

    int count=0;
    for(int i=0;i<nLength;i++){

        for(int j=i;j<nLength;j++){
            if(j==i) a[count++]=n[j];
            else{
                a[count]=a[count-1]+n[j];
                count++;
            }
        }
    }

    for(int i=0;i<tCount;i++){

        cout<<a[i]<<endl;
    }

    return 1;
}

int main(){
    cout<<substrings("123");

}

