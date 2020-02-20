//
// Created by Saurabh on 2/20/2020.
//

#include<bits/stdc++.h>

using namespace std;
const  int a=10009;
string arr[a];
int main(){

    int n;
    cin>>n;

    arr[0]="1";
    arr[1]="11";

    for(int i=2;i<n;i++){
        string temp=arr[i-1];
        string s="";

        int count=0;
        for(int j=0;j<temp.length()-1;j++){
            if(temp[j]==temp[j+1]){
                count++;
            }else{
                s+=to_string(count+1);
                s+=temp[j];
                count=0;
            }
        }
        if(count==0){
            s+=to_string(1);

        }else{
            s+=to_string(count+1);

        }
        s+=temp[temp.length()-1];
        arr[i]=s;

    }

    cout<<arr[n-1]<<endl;

}
