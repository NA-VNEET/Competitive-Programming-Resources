#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//problem : https://codeforces.com/problemset/problem/1901/A

int main(){
    //approach : brute force and greedy;
    //key point : calculat the max diff between adjacent and max(a[0],2*(n-a[n-1]));

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0;i<n;i++) cin>>v[i];

        int mx = max(v[0],2*(n-v[n-1]));
        for(int i = 0;i<n-1;i++){
            mx = max(mx,v[i+1]-v[i]);
        }
        cout<<mx;
    }
}