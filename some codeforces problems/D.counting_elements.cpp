#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        int x = v[i] +1;
        auto it = find(v.begin(), v.end(), x);
        if(it==v.end()){
            continue;
        }else{
            cnt++;
        }
    }
    cout<<cnt<<endl;
    
    return 0;
}