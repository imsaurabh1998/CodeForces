//
// Created by Saurabh on 2/25/2020.
//

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n-->0){
        int a, b,c;
        cin>>a>>b>>c;
        int ans=INT_MAX;
        int num1,num2,num3;

        for(int i=1;i<=2*a;i++) {
            for(int j=i;j<=2*b;j+=i){
                int tempStep=0,rem=0,third=c;
                tempStep+=abs(a-i);
                tempStep+=abs(b-j);
                if(c%j!=0){
                    rem=c%j;
                    if(j/2>=rem) third-=rem;
                    else third+=j-rem;

                    tempStep+=abs(c-third);
                }

                if(ans>tempStep) ans=tempStep,num1=i,num2=j,num3=third;


            }

        }

        cout<<ans<<endl<<num1<<" "<<num2<<" "<<num3<<endl;

    }
}
