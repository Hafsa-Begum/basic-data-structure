#include <bits/stdc++.h>
using namespace std;
auto it = find(myList.begin(), myList.end(), 500);

    if(it == myList.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }
int main()
{
    list<string> myList;
    while(true){
        string v;
        getline(cin, v);
        if(v.compare("end")==0) break;
        myList.push_back(v);
    }
    
    int q; cin>>q;
    while(q--){
        string a;
        cin>>a;
        auto it = find(myList.begin(), myList.end(), a);
        if(it == myList.end()){
            cout<<"Not Available"<<endl;
        }
        else{
            cout<<*it<<endl;
        }
    }
    return 0;
}