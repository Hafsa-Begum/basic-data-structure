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

        int max_frq = 0;
        string my_word;
        while (ss>>word)
        {
            mp[word]++;
            if(mp[word]>max_frq){
                max_frq = mp[word];
                my_word = word;
            }
            
        }
        cout<<my_word<<" "<<max_frq<<endl;
          
    }
    return 0;
}