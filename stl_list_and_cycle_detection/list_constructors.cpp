#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myFirstList;
    // list<int> myList(5, 7);
    // list<int> myList2(myList);
    // vector<int> v(5, 7);
    // list<int> myList(v.begin(), v.end());
    int ar[5] = {10, 20, 30, 40, 50};
    list<int> myList(ar, ar+5);
    // cout<<myList.front()<<endl;
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout<<*it<<" ";
    }
    // for(int val:myList){
    //     cout<<val<<" ";
    // }
    
    return 0;
}