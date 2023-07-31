#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int, int, greater<int> > mp;
        while(n--){
            int x; cin>>x;
            mp[x]++;
        }
        int repeated = 0;
        int num;
        for(auto it = mp.begin(); it!= mp.end(); it++){
            repeated = max(repeated, it->second);
        }
        for(auto it = mp.begin(); it!= mp.end(); it++){
            if(repeated == it->second){
                num = it->first;
                break;
            }
        }
        cout<<num<<" "<<repeated<<endl;
    }
    return 0;
}