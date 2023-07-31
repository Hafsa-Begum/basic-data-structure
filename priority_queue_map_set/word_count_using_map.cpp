#include <bits/stdc++.h>
using namespace std;

class longestWord{
    public:
    string word;
    int freq;
    int length;
    longestWord(string word, int freq, int length){
        this->word = word;
        this->freq = freq;
        this->length = length;
    }
};
class cmp{
    public:
    bool operator()(longestWord a, longestWord b){
        if(a.freq == b.freq) return a.length<b.length;
        return a.freq<b.freq;
    }
};
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
        priority_queue< longestWord, vector<longestWord>, cmp > pq;
        for(auto it = mp.begin(); it!=mp.end(); it++){
            string word = it->first;
            int sz = word.size();
            longestWord obj(it->first, it->second, sz);
            pq.push(obj);
        }

        cout<<pq.top().word<<" "<<pq.top().freq<<endl;    
    }
    return 0;
}