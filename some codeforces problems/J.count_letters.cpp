// link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int> v(26);
    for(int i=0; i<26; i++){
        v[i]=0;
    }
    for(int i=0; i<s.size(); i++){
        v[s[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(v[i]>0) {
            char c = i+'a';
            cout<<c<<" : "<<v[i]<<endl;
        }
    }
    return 0;
}