#include <bits/stdc++.h>
using namespace std;
string replaceString(string &s, string f, string r){
    int t = s.find(f);
    while(s.find(f)!=-1){
        s.replace(s.find(f), f.size(), r);
    }
    return s;
}
int main()
{
    string s;
    cin>>s;

    stack<char> st;
    
    if(s.find("RG")!=-1){
        replaceString(s, "RG", "A");
    }
    if(s.find("GR")!=-1){
        replaceString(s, "GR", "A");
    }
    if(s.find("RB")!=-1){
        replaceString(s, "RB", "C");
    }
    if(s.find("BR")!=-1){
        replaceString(s, "BR", "C");
    }
    if(s.find("GB")!=-1){
        replaceString(s, "GB", "X");
    }
    if(s.find("BG")!=-1){
        replaceString(s, "BG", "X");
    }
    cout<<"string s = "<<s<<endl;
    for(int i=0; i<s.size(); i++){
        if(!st.empty() && s[i] == st.top()){
            st.pop();
            continue;
        }
        st.push(s[i]);   
    }
    while (!st.empty()){
        cout<<st.top();
        st.pop();
    }
    
    return 0;
}
//RGB
//R+G or G+R = A
//G+B or B+G = B
//R+B or B+R = C
//RRBBGG
//RBGBBR
//BBB