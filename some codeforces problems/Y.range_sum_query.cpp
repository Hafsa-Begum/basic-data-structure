// link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

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
        long long int x, y, sum=0;
        cin>>x>>y;
        for(long long int j=x; j<=y; j++){
            sum+=v[j-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}