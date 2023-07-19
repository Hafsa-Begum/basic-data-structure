#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    for(auto it = s.begin(); it!=s.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}
//set is used to remove duplicate value, sort elements, and search an element