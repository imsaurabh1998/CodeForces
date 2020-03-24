//
// Created by Saurabh on 2/11/2020.
//

#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {

   ll a,b;
   cin>>a>>b;

   ll x[64]={0};
   ll y[64]={0};
   ll aTemp=a;
   ll bTemp=b;
   ll aVal=a;
   ll bVal=b;

    ll maxCount_bit=0;
   for(ll i=0;a>0 ||b>0;i++){

      if(a&1) x[i]=1;
      a=a>>1;

      if(b&1) y[i]=1;
        b=b>>1;

        maxCount_bit++;
   }

//   for(int a : x) cout<<a<<" ";
//   cout<<endl;
//   for(int a : y) cout<<a<<" ";
//   cout<<endl;
//
//   for(ll i=0;i<maxCount_bit-1;i++){
//        if(x[i]==0 && y[i]==0) x[i]=1;
//        else if(x[i]==1 && y[i]==1) y[i]=0;
//
//   }

//   if((x[maxCount_bit-1]==1 &&y[maxCount_bit-1])==0 ){
//
//   } else if(x[maxCount_bit-1]==0 &&y[maxCount_bit-1]==1){
//
//   }

    ll mask=1<<(maxCount_bit-2);
   cout<<"mask is"<<mask<<endl;
   for(ll i=maxCount_bit-2;i>=0;--i){

       if(x[i]==0 && y[i]==0) {
           if((aTemp+mask)<=bVal){
               aTemp+=mask;
               x[i] = 1;
           }


       }
       else if(x[i]==1 && y[i]==1) {
           if((bTemp-mask)>=aVal){
               bTemp-=mask;
               y[i]=0;
           }
       }
       mask=mask/2;
   }


//   cout<<"After Changing the values"<<endl;
//    for(int a : x) cout<<a<<" ";
//    cout<<endl;
//    for(int a : y) cout<<a<<" ";
//    cout<<endl;

   ll ans=0;
   ll p=1;
   ll xVal=0;
   ll yVal=0;
   for(ll i=0;i<maxCount_bit;i++){
       if(x[i]) xVal+=p;
       if(y[i]) yVal+=p;

       if((x[i]==0 && y[i]==1) || (x[i]==1&& y[i]==0)){
           ans+=p;
       }
       p*=2;
   }
   cout<<xVal<<" "<<yVal<<endl;
   cout<<ans<<endl;

}