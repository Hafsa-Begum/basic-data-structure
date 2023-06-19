#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(10);
    v.push_back(30);
    v.push_back(10);

    list<int> myList(v.begin(), v.end());
    //to remove any elemnt
    // myList.remove(10); //20 30 40 20 30
    // myList.sort(); //10 10 10 20 20 30 30 40
    // myList.sort(greater<int>()); //40 30 30 20 20 10 10 10
    // myList.unique(); //40 30 20 10
    myList.reverse();
    for(int val:myList){
        cout<<val<<" ";
    }
    return 0;
}