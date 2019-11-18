//
// Created by SAURABH on 18-11-2019.
//

#include<iostream>
#include<map>

using namespace std;

int main(){

    char a;
    string b;
    cin>>a>>b;
    map<char,char> mLeft,mRight;

    mRight.insert(pair<char,char>('s','a'));
    mRight.insert(pair<char,char>('d','s'));
    mRight.insert(pair<char,char>('f','d'));
    mRight.insert(pair<char,char>('g','f'));
    mRight.insert(pair<char,char>('h','g'));
    mRight.insert(pair<char,char>('j','h'));
    mRight.insert(pair<char,char>('k','j'));
    mRight.insert(pair<char,char>('l','k'));
    mRight.insert(pair<char,char>(';','l'));
    mRight.insert(pair<char,char>('w','q'));
    mRight.insert(pair<char,char>('e','w'));
    mRight.insert(pair<char,char>('r','e'));
    mRight.insert(pair<char,char>('t','r'));
    mRight.insert(pair<char,char>('y','t'));
    mRight.insert(pair<char,char>('u','y'));
    mRight.insert(pair<char,char>('i','u'));
    mRight.insert(pair<char,char>('o','i'));
    mRight.insert(pair<char,char>('p','o'));
    mRight.insert(pair<char,char>('x','z'));
    mRight.insert(pair<char,char>('c','x'));
    mRight.insert(pair<char,char>('v','c'));
    mRight.insert(pair<char,char>('b','v'));
    mRight.insert(pair<char,char>('n','b'));
    mRight.insert(pair<char,char>('m','n'));
    mRight.insert(pair<char,char>(',','m'));
    mRight.insert(pair<char,char>('.',','));
    mRight.insert(pair<char,char>('/','.'));


    mLeft.insert(pair<char,char>('a','s'));
    mLeft.insert(pair<char,char>('s','d'));
    mLeft.insert(pair<char,char>('d','f'));
    mLeft.insert(pair<char,char>('f','g'));
    mLeft.insert(pair<char,char>('g','h'));
    mLeft.insert(pair<char,char>('h','j'));
    mLeft.insert(pair<char,char>('j','k'));
    mLeft.insert(pair<char,char>('k','l'));
    mLeft.insert(pair<char,char>('l',';'));
    mLeft.insert(pair<char,char>('q','w'));
    mLeft.insert(pair<char,char>('w','e'));
    mLeft.insert(pair<char,char>('e','r'));
    mLeft.insert(pair<char,char>('r','t'));
    mLeft.insert(pair<char,char>('t','y'));
    mLeft.insert(pair<char,char>('y','u'));
    mLeft.insert(pair<char,char>('u','i'));
    mLeft.insert(pair<char,char>('i','o'));
    mLeft.insert(pair<char,char>('o','p'));
    mLeft.insert(pair<char,char>('z','x'));
    mLeft.insert(pair<char,char>('x','c'));
    mLeft.insert(pair<char,char>('c','v'));
    mLeft.insert(pair<char,char>('v','b'));
    mLeft.insert(pair<char,char>('b','n'));
    mLeft.insert(pair<char,char>('n','m'));
    mLeft.insert(pair<char,char>('m',','));
    mLeft.insert(pair<char,char>(',','.'));
    mLeft.insert(pair<char,char>('.','/'));

    if(a=='R'){

        for(int i=0;i<b.length();i++){

            b[i]=mRight[b[i]];
        }
    }else{
        for(int i=0;i<b.length();i++){

            b[i]=mLeft[b[i]];
        }
    }

    cout<<b<<endl;
}

