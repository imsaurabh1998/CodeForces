//
// Created by Saurabh on 11/4/2019.
//


#include<iostream>

using namespace std;

string queueAtSchool(int y, string a);

int main(){

    int x, y;
    cin>>x>>y;

    string a ;
    cin>>a;

    cout<<queueAtSchool(y, a);
}

string queueAtSchool(int y, string a){


    for(int i=0;i<y;i++){

        for(int j=0;j<a.length()-1;j++){

            if(a[j]=='B' && a[j+1]=='G'){
                swap(a[j],a[j+1]);

                j++;
            }
        }
    }

    return a;
}
