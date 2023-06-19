#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3] = {10, 20, 30};
    list<int> myList(a, a+3);
    // cout<<myList.max_size()<<endl;
    // myList.clear();
    myList.resize(2); //10 20
    // myList.resize(5); //10 20 0 0 0
    myList.resize(5, 100); //10 20 100 100 100
    for(int val: myList){
        cout<<val<<endl;
    }
    return 0;
}