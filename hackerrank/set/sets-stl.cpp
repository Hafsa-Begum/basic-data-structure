#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    set<int> s;
    for (int i = 0; i < t; i++)
    {
        int a, b; cin>>a>>b;
        if(a==1){
            s.insert(b);
        }
        else if(a==2){
            s.erase(b);
        }
        else if(a==3){
            if(s.count(b)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}