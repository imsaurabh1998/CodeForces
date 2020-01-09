//
// Created by SAURABH on 09-01-2020.
//


#include<bits/stdc++.h>
using namespace std;

int main(){

    int Tcase;
    cin>>Tcase;

    while(Tcase-->0){

        int TLength;
        cin>>TLength;

        vector<int> list;
        int list1[100]{0};
        while(TLength--){
            int temp;
            cin>>temp;
            list.push_back(temp);
        }
        //cout<<"list size: "<<list.size()<<endl;
        if(list.size()%2!=0){


            int i=0;
            int j=list.size()-1;
            //cout<<"if list is odd length i:  "<<i<<" j: "<<j <<endl;

            list1[i++]=list.size();
            list1[j--]=list.size();

            int mid=list.size()/2;

            //cout<<"mid point of array: "<<mid<<endl;

            int Nnum=(mid-1)*2+1;
            //cout<<"Nnum :  "<<Nnum<<endl;
            while(i!=j){
                int element=list1[i-1]+Nnum;
                //cout<<"element :->"<<element<<endl;
                list1[i++]=element;
                list1[j--]=element;
                Nnum-=2;
            }
            list1[i]=list1[i-1]+1;

            int result=0;
            for(int i=0;i<list.size();i++){
                if(list1[i]%2!=0){
                    result^=list[i];
                }
            }

            cout<<result<<endl;



        }else cout<<0<<endl;
    }

}

