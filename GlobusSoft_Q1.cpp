//
// Created by Saurabh on 1/14/2020.
//

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

long long int mod=10000007;


int main(){

    int n;
    cin>>n;

    //taking the constants size of array initially it can be dynamically allocated as well;
    int arr[100][100];

    //Add the 1 - n number in the first row Initially;
    for(int i=1;i<=n;i++) arr[0][i-1]=i;

    for(int i=1;i<n;i++){

        for(int j=0;j<n-i;j++){
            arr[i][j]=arr[i-1][j]+arr[i-1][j+1];
        }
    }

    //Now Print the array
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}

