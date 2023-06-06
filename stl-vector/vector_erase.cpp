#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // v.erase(v.begin()+2); //output: 10 20 40 50
    // v.erase(v.begin()+1, v.begin()+4); //output: 10 50 
    v.erase(v.begin()+1, v.end()-1); //output: 10 50
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}

// note::::
//v.erase() -> to delete elements from vector - time complexity - O(N+K) - K=numbers of elements to be deleted
//v.erase(val1) -> used to delete the element situated at index val1
//v.erase(val1, val2) -> used to delete elements from postiton val1 to before val2
