#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a[3] = {10, 20, 30};
    // list<int> myList(a, a+3);

    //assign
    // list<int> newList;
    // newList = myList; // 10 20 30
    // newList.assign(myList.begin(), myList.end()); // 10 20 30

    //to insert at tail
    // myList.push_back(100);

    //to insert at head
    // myList.push_front(100);

    //to delete head
    // myList.pop_front();

    //to delete tail
    // myList.pop_back();

    //insert element
    // myList.insert(next(myList.begin(), 1),100); //10 100 20 30
    // vector<int> v(3,500);
    // myList.insert(next(myList.begin(), 2), v.begin(), v.end());

    //erase elemnt from specific position
    // myList.erase(next(myList.begin(), 1));

    //to replace any value
    int a[7] = {10, 20, 30, 20, 40, 50, 20};
    list<int> myList(a, a+7);

    // replace(myList.begin(), myList.end(), 20, 1000); //10 1000 30 1000 40 50 1000

    //to find any value
    auto it = find(myList.begin(), myList.end(), 500);

    if(it == myList.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }

    // for(int v:myList){
    //     cout<<v<<" ";
    // }
    return 0;
}