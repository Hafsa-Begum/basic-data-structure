#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input: type-1
    // int n;
    // cin>>n;
    // vector<int> v;
    // for(int i=0; i<n; i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    //input: type-2
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}