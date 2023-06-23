#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    list<int> myList;
    int v;
    while(true){
        cin>>v;
        if(v == -1) break;
        myList.push_back(v);
    }
    myList.sort();
    myList.unique();
    for(int val:myList){
        cout<<val<<" ";
    }
    return 0;
}
