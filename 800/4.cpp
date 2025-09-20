#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//problem : https://codeforces.com/problemset/problem/1899/A

int main(){
    //approach : Math
    //key point : if n%3 == 0 print(SECOND) else print(FIRST);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3 == 0) cout<<"SECOND"<<endl;
        else cout<<"FIRST"<<endl;    
    }
}