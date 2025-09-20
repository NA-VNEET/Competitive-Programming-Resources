#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//problem : https://codeforces.com/problemset/problem/1903/A

int main(){
    //approach : brute force and greedy;
    //key point : if k == 1 then arr need to sorted, if not print no . for other cases print yes

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i = 0;i<n;i++) cin>>v[i];

        bool flag = true;

        if(k == 1){
            
            for(int i = 1;i<n;i++){
                if(v[i] < v[i-1]){
                    flag = false;
                    break;
                }
            }
        
        }

        flag == true ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}