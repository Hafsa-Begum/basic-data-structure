#include <bits/stdc++.h>
using namespace std;

int main()
{   
    string s;
    
    while (getline(cin, s) != EOF)
    {
        vector<char> v;
        for(int i = 0; i<s.size(); i++){
            if(s[i] != ' '){
                v.push_back(s[i]);
            }
        }
        sort(v.begin(), v.end());
        for(char c:v){
            cout<<c;
        }
    }
    
    return 0;
}