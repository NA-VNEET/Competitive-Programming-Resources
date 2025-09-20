#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//problem : https://codeforces.com/problemset/problem/1899/A

int main(){
    //approach : simple observation
    //key point : if v[i] == 1 print yes else no;

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3 == 0) cout<<"SECOND"<<endl;
        else cout<<"FIRST"<<endl;    
    }
}