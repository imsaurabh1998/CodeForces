//
// Created by SAURABH on 15-12-2019.
//


#include<bits/stdc++.h>
#include<math.h>

using namespace std;

typedef long long int ll;
  long long int mod= 998244353;
  long long int arr[214748362];
  vector<ll> mList;

  vector<vector<ll>> A;

  void permute(vector<ll> A);

  int main(){

      int n;
      cin>>n;

      int tSum=(n*(n+1))/2;

      vector<ll> list;
      for(int i=1;i<=n;i++)  list.push_back(i);

      permute(list);

      for(int i=0;i<mList.size()-n;i++){

          vector<int> tList;
          int k=i;
          for(int j=0;j<n;n++){
              tList.push_back(mList[k++]);
          }
          A.push_back( tList);
      }
      int count=0;
      for(vector<int> list: A){

          int res;

          for(int v : list){
              res+=v;
          }

          if(res==tSum) count++;
      }

      cout<<count<<endl;

  }

void permute(vector<ll> A)
{
    do {
       for(ll t : A){
           mList.push_back(t);
       }
    } while (next_permutation(A.begin(), A.end()));
}


