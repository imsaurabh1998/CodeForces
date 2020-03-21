//
// Created by SAURABH on 18-03-2020.
//

#include<iostream>
#include<queue>
#include<set>

using namespace std;

class Person{
public:
    string name;
    int  age;

    Person(){

    }

    Person(string a, int b){
        name=a;
        age=b;
    }
};

class compare{

public:
    bool comp(string a, string b){

        string t1;
        t1=b.substr(0,a.length());
        if(a==t1) return false;
        return true;
    }
};

class PersonCompare {
public:
    bool operator()(Person a, Person b) {
        cout<<a.name<<" "<<b.name<<endl;
        return a.age < b.age;
    }
};

int main(){

    priority_queue<Person,vector<Person>,PersonCompare> pq;



    int n;
    cin>>n;
    set<string, compare> s;


    while(n--){
        string name;
        int age;
        cin>>name>>age;
        Person p(name,age);
        pq.push(p);
    }

    for(int i=0;i<3;i++){
        cout<<" Element Name is "<<pq.top().name<<" age is "<<pq.top().age<<endl;
        pq.pop();
    }

}
