//
// Created by SAURABH on 21-03-2020.
//

#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;
long long int val=0;

bool comp(int a, int b){
     if(a<b) return true;
     cout<<"a "<<a<<" b"<<b<<endl;
     val++;

    return false;
}

int main(){

   int n;
   cin>>n;

   while(n--){

       int k;
       cin>>k;
       vector<int> list(k);


       for(auto & a: list) cin>>a;
       //sort(list.begin(),list.end(),comp);

       int count=0;
       for(int i=0;i<list.size();i++){
           for(int j=0;j<list.size()-i-1;j++){
               if(comp(list[j],list[j+1])){
                   count++;
                   int v=list[j];
                   list[j]=list[j+1];
                   list[j+1]=v;
               }
           }
       }
       cout<<count<<endl;
   }
}