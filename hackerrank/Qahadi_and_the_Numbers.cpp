#include <bits/stdc++.h>
using namespace std;

int countMoves(vector<int> v){
    map<int, int> mp;
    int moves = 0;
    for(int n:v){
        mp[n]++;
        if(mp[n]>1){
            moves++;
            mp[n] = 1;
        }
    }

    return moves;
}

int main()
{
    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int> v;
        while(n--){
            int x; cin>>x;
            v.push_back(x);
        }
        int moves = countMoves(v);
        cout<<moves<<endl;
    }
    

    return 0;
}