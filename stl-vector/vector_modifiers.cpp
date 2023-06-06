#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x;
    x.push_back(10);
    x.push_back(20);
    x.push_back(30);
    x.pop_back();
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // v=x;
    v.assign(x.begin(), x.end());
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

// note::::
//v=x, v.assign(x) -> to assign vector to other -> time complexity O(N)
//v.push_back(x) -> used to push a value at the end of vector
//v.pop_back() -> used to delete last value from vector