// link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        if(v[i]>0){
            v[i]=1;
        }
        else if(v[i]<0){
            v[i]=2;
        }
        else{
           v[i]=0; 
        }
    }
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}