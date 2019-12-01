//
// Created by SAURABH on 29-11-2019.
//

#include<iostream>
#include<algorithm>

using namespace std;

int main() {


    int n;
    cin>>n;

    int red,green,blue;

    while(n-->0){

        cin>>red>>green>>blue;
    int arr[]={red,green,blue};
        sort(arr.begin(),arr.end());
        if(red==green && green==blue){
            cout<<green<<endl;
        }else{


        }
    }
}
