#include <bits/stdc++.h>
using namespace std;

// RB = P
// RG = Y
// BG = C
string final(string &s){
    stack<char> st;

    for(char c:s){
        if(st.empty()){
            st.push(c);
        }
        else{
            char val = st.top();

            if((val == 'R' && c == 'B') || (val == 'B' && c == 'R')){
                st.pop();
                if(!st.empty() && st.top() == 'P'){
                    st.pop();
                }
                else{
                    st.push('P');
                }
            }
            else if((val == 'R' && c == 'G') || (val == 'G' && c == 'R')){
                st.pop();
                // st.push('Y');
                if(!st.empty() && st.top() == 'Y'){
                    st.pop();
                }
                else{
                    st.push('Y');
                }
            }
            else if((val == 'B' && c == 'G') || (val == 'G' && c == 'B')){
                st.pop();
                // st.push('C');
                if(!st.empty() && st.top() == 'C'){
                    st.pop();
                }
                else{
                    st.push('C');
                }
            }
            else if(val == c){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
    }

    string finalColors;

    while (!st.empty())
    {
        finalColors = st.top() + finalColors;
        st.pop();   
    }
    return finalColors;
}

int main()
{
    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        
        string s;
        cin>>s;

        string finalColors = final(s);
        cout<<finalColors<<endl;
        
    }
    
    return 0;
}