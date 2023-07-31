#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    cin.ignore();
    while(t--){
        string sentence;
        getline(cin, sentence);
        stringstream ss(sentence);
        string word;
        map<string, int> mp;
        while (ss>>word)
        {
            mp[word]++;
        }
        int max_val = 0;
        string name;
        for(auto it = mp.begin(); it!=mp.end(); it++){
            max_val = max(max_val, it->second);
        }
        maq<string, int> max_name;
        for(auto it = mp.begin(); it!=mp.end(); it++){
            if(it->second == max_val && it->first.size()){
                max_val = it->second;
                name = it->first;
                break;
            }
        }
        cout<<name<<" "<<max_val<<endl;
    }
    return 0;
}