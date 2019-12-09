//
// Created by Saurabh on 12/9/2019.
//

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;
int midPrice(int start,int end,vector<int> list,int b);

int main(){

    int n;
    cin>>n;

    while(n-->0){

        int a(0),b(0),maxNum(0);
        cin>>a>>b;

        vector<int>list;

        while(a-->0){
            int temp;
            cin>>temp;
            list.push_back(temp);
        }

        sort(list.begin(),list.end());

        if(list[list.size()-1]-list[0]==b){
            cout<<list[list.size()-1]<<endl;
        }else if(list[list.size()-1]-list[0]<b){
            cout<<(list[list.size()-1]+b-list[list.size()-1])<<endl;
        }else if(list[list.size()-1]-list[0]>b){

        }
        else {
            cout<<-1<<endl;
        }
    }
}

int midPrice (int start,int end,vector<int> list,int b){
        int index(0),mxValue(0);
    if(start<=end){

        int mid=(start+end)/2;

        if(list[mid]-list[0]<=b && list[list.size()-1]-list[mid]<=b && mxValue<list[mid]){
            mxValue=list[mid];
        }

        if((list[mid]-list[0])>b && (list[list.size()-1]-list[mid])<=b){
            int a=midPrice(start,mid-1,list,b);
        }else if((list[mid]-list[0]<=b && (list[list.size()-1]-list[mid]>b))){
            int b=midPrice(mid+1,end,list,b);
        }

    }
    return 0;
}

