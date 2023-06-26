#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int n, i=0; cin>>n;
    while (i<n)
    {
        int x; cin>>x;
        st.push(x);
        i++;
    }

    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
    
    return 0;
}