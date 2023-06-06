#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    // cout<<v[v.size()-1]<<endl; //last element of vector can be accessed
    // cout<<v.back()<<endl; //used to get last element of vector-mostly used
    // cout<<v.front()<<endl; //used to get first element of vector
    // cout<<v[0]<<endl; //used to get any element of vector-mostly used

    // vector<int>::iterator it;
    for(auto it=v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}