#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["shakib hasan"] = 75;
    mp["tamim"] = 30;
    mp["mushfiq"] = 69;
    
    // for(auto it = mp.begin(); it!= mp.end(); it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    // if(mp.count("akib")){
    //     cout<<"ase"<<endl;
    // }else{
    //     cout<<"nai"<<endl;
    // }
    cout<<mp["tamim"]<<endl;
    return 0;
}

//array -> index - value pair, limit- 10^5
//map -> key - value pair
//key can be int, char, string, class, stack, queue, pair 
//key can be 10^18 but it not mean from 0 to 10^18 all values, only for selected key - value can be found from map