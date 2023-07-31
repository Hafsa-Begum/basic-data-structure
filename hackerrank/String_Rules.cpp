#include <bits/stdc++.h>
using namespace std;
string processFunc(int num, string chars){
    string result;

    while (num--)
    {
        result += chars;
    }
    
    return result;
}
int main()
{
    string s;
    cin>>s;
    string result = "";
    string chars = "";
    int num = 0;

    for(char c:s){
        if(c>='1' && c<='9'){
            num = c - '0';
        }
        else if(c>='a' && c<= 'z'){
            chars += c;
        }
        else{
            result += processFunc(num,chars);
            chars = "";
            result += c;
        }
    }

    if(!chars.empty()){
        result += processFunc(num, chars);
    }

    cout<<result<<endl;
    return 0;
}