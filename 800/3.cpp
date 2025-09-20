#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//problem : https://codeforces.com/problemset/problem/1900/A

int main(){
    //approach : constructive algorithm and greedy;
    //key point : three consecutive . cnt++ else cnt+=consecutive : 1 or 2;

    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        
        int ans = 0;
        int cnt = 1;
        for(int i = 0;i<n-1;i++){
            if(s[i] == s[i+1] && s[i] == '.'){
                cnt++;
            }
            if(s[i] == '#' && i != 0){
                if(cnt >= 3) ans+=2;
                else ans+=cnt;

                cnt = 1;
            }
        }
        
        if(cnt != 0){
            if(cnt >= 3) ans++;
            else ans+=cnt;
        }
        cout<<ans<<endl;
    }
}