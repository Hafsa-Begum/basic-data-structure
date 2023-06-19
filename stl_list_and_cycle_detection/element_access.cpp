#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    list<int> myList(a, a+5);

    //to access tail element
    // myList.back();

    //to access head element
    // myList.front();

    //to access element of index 2
    *next(myList.begin(), 2);

    // for(int val:myList){
    //     cout<<val<<endl;
    // }
    return 0;
}