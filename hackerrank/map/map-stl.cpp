#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    map<string, int> m;
    while (t--)
    {
        int a;
        string b;
        cin>>a>>b;
        if(a==1){
            int marks; cin>>marks;
            m[b] += marks;
        }
        else if(a==2){
            m[b]=0;
        }
        else if(a==3){
            cout<<m[b]<<endl;
        }
    }
    
    return 0;
}