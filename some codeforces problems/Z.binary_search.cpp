// link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, q; cin>>n>>q;
    vector<long long int> v(n);
    for(long long int i=0; i<n; i++){
        cin>>v[i];
    }
    for(long long int i=0; i<q; i++){
        long long int x;
        cin>>x;
        auto it=find(v.begin(), v.end(), x); 
        if(it==v.end()){
            cout<<"not found"<<endl;
        }
        else{
           cout<<"found"<<endl; 
        }
    }
    return 0;
}