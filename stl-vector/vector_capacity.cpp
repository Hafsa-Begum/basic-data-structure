#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // cout<<v.max_size()<<endl; //to know the maximum size a vector can take
    cout<<v.capacity()<<endl; //to know about the capacity of current vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // v.clear();
    v.resize(2); //output- 10 20
    // v.resize(7); //outout- 10 20 0 0 0 0 0
    v.resize(7, 100); //output- 10 20 100 100 100 100 100
    cout<<v.size()<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}

// note::::
//v.max_size() //to know the maximum size a vector can take
//v.capacity() //to know about the capacity of current vector
//if capacity is being overed by pushing value then the capacity is increased by double.
//v.clear() -> only ignore the present value and returns size zero. after clearing values, can be accessed using v[0], v[1], v[3] etc. time complexity-O(N)
//v.empty() -> checks if the vector is empty or not then returns true/false
//v.resize() -> used to decrease or increase size of the vector: time complexity - O(K) K=difference between new size and current size
//v.resize(2) -> it decrease vector sizes to 2 so the elements here will be two.
//v.resize(7) -> it increasing the vector sizes, first two elements will 10 20 other five will be 0 0 0 0 0
//v.resize(7, 100) -> if second value provide in resize, which means the other 5 elements will be 100 100 100 100 100
