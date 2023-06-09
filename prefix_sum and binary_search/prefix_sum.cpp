#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, q; cin>>n>>q;
    vector<long long int> v(n);
    for(long long int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<long long int> pre(n);
    pre[0]=v[0];
    for(long long int i=1; i<n; i++){
        pre[i]=v[i]+pre[i-1];
    }
    
    while(q--){
        long long int x, y, sum=0;
        cin>>x>>y;
        x--;
        y--;
        if(x==0) sum=pre[y];
        else sum=pre[y]-pre[x-1];
        cout<<sum<<endl;
    }
    return 0;
}